/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <device/map.h>

// #include <unistd.h>

#define SCREEN_W (MUXDEF(CONFIG_VGA_SIZE_800x600, 800, 400))
#define SCREEN_H (MUXDEF(CONFIG_VGA_SIZE_800x600, 600, 300))

static uint32_t screen_width() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).width, SCREEN_W);
}

static uint32_t screen_height() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).height, SCREEN_H);
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;

#ifdef CONFIG_VGA_SHOW_SCREEN
#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

// 创建并初始化窗口  
static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NEMU", str(__GUEST_ISA__));
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
  	printf("SDL_Init Error: %s\n", SDL_GetError());
		assert(0);
	}

  SDL_CreateWindowAndRenderer(
      SCREEN_W * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
  SDL_RenderPresent(renderer);
	// SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
}

// static uint32_t tempbuf[SCREEN_W * SCREEN_H];

static inline void update_screen() {
	// for (int i = 0; i < 100; i++) printf("%d ", *(int *)vmem);
	// printf("SCREEN_W = %d, SCREEN_H = %d, pitch = %ld\n", SCREEN_W, SCREEN_H, SCREEN_W * sizeof(uint32_t));
	// memcpy(tempbuf, vmem, sizeof(tempbuf));  // 确保数据写入实际内存
  // SDL_UpdateTexture(texture, NULL, tempbuf, SCREEN_W * sizeof(uint32_t));
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}
#else
static void init_screen() {}

static inline void update_screen() {
  io_write(AM_GPU_FBDRAW, 0, 0, vmem, screen_width(), screen_height(), true);
}
#endif
#endif

/*
void test_fill_red() {
  for (int i = 0; i < SCREEN_W * SCREEN_H; i++) {
    ((uint32_t *)vmem)[i] = 0xFF0000FF;
  }
	for (int i = 0; i < 10; i++) {
  	printf("vmem[%d] = 0x%x\n", i, ((uint32_t *)vmem)[i]);
	}
}*/

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
	uint32_t sync = vgactl_port_base[1];
  if (sync) {
		// printf("call update_screen\n");
		// test_fill_red();
		// printf("vmem address: %p\n", vmem);
    update_screen();
    vgactl_port_base[1] = 0;
		// printf("begin sleep\n");
		// sleep(3);
		// printf("end sleep\n");
	}
}

void init_vga() {
	// 这里初始化了vgactl_port_base，对于前4个字节，低2个字节是高度，高2个字节是宽度，后四个字节表示sync
  vgactl_port_base = (uint32_t *)new_space(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();
	// 这里设定了nemu里的内存空间，实现了设备的interface
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("vgactl", CONFIG_VGA_CTL_PORT, vgactl_port_base, 8, NULL);
#else
  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);
#endif

	// 这里初始化了vmem，大小为屏幕的大小
  vmem = new_space(screen_size());
	// printf("vmem address: %p\n", vmem);
  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
	// printf("vmem address: %p\n", vmem);
	// 这里调用了init_screen函数并且初始化vmem内部元素为0
  IFDEF(CONFIG_VGA_SHOW_SCREEN, init_screen());
  IFDEF(CONFIG_VGA_SHOW_SCREEN, memset(vmem, 0, screen_size()));
	// printf("vmem address: %p\n", vmem);
}
