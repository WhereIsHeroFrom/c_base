#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
x << y          读作x左移y位

0b0111   左移3位  ->  0b0111000
*/

int main() {
    // 1、左移运算符的含义
    int x = 0b10111;
    int y = 3;
    int z = 0b10111000;
    printf("%d %d\n", (x<<y), z);
    // x<<1  ->   x*2
    // x<<2  ->   x*4
    // x<<3  ->   x*8
    // x<<y  ->   x*2^y
    // 10 -> 2
    // 100 -> 4
    // 1000 -> 8
    // 10000 -> 16

    // 2、负数左移（未定义行为，务必避免）
    // printf("-1 << 1 = %d\n", -1 << 1);

    // 3、左移负数位（未定义行为，务必避免）
    // printf("%d\n", 32 << -1);
    // printf("%d\n", 32 << 100);
    
    // 4、生成标记位
    x = 0b10110;
    y = 2;
    // 1<<y 0b00100;
    printf("%d %d\n", x & (1 << y), 0b100 );
    printf("%d %d\n", x | (1 << y), 0b10110);
    printf("%d %d\n", x ^ (1 << y), 0b10010);

    return 0;
}
