#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

static int screen_h;
static int screen_w;
static uint32_t *fb = NULL;

void __am_gpu_init() {
	uint32_t screen_wh = inl(VGACTL_ADDR);
	screen_h = screen_wh & 0xffff;
	screen_w = screen_wh >> 16;
  fb = (uint32_t *)(uintptr_t)FB_ADDR;
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = screen_w, .height = screen_h,
    .vmemsz = screen_w * screen_h * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
	// 只有sync为0，即上一画面已经刷新，才会更新vmem
	if (!ctl->sync && (w == 0 || h == 0)) return;
	uint32_t *pixels = ctl->pixels;
	for (int i = y; i < y + h; i++) {
	  for (int j = x; j < x + w; j++) {
	 		fb[screen_w * i + j] = pixels[w * (i - y) + (j - x)];	 
		}
	}
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
