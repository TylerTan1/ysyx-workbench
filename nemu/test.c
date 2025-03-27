#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t stack_value = 12345; // 在栈上声明一个 uint32_t 变量
    uintptr_t a = (uintptr_t)&stack_value; // 获取它的地址并赋值给 a

    uint32_t value = *(uint32_t*)a; // 解引用

    printf("The value at address %p is %u\n", (void*)a, value);

    return 0;
}
