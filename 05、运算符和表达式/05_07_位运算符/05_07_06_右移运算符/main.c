#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
x >> y       读作 将x右移y位

0b10111 -> 3  -> 0b10
*/

int main() {
    // 1、右移的含义
    int x = 0b10111;
    int y = 3;
    int z = 0b10;
    printf("%d %d\n", x>>y, z);
    // 0b110  6
    // 0b11   3
    // 0b1    1
    // x>>y ->  x/2^y

    // 2、负数的右移
    // x>>y 当 x 是负数的时候
    int a = 0b10111111111111111111111111111111;
    int b = 0b11110111111111111111111111111111;
    printf("%d %d\n", a>>3, b);

    // 3、右移负数位（未定义行为）
    // x>>y


    // 4、去掉低 k 位
    a = 0b1010101;
    int k = 5;
    printf("%d %d\n", a >> k, 0b10);

    // 5、取第 k 个低位的值
    a = 0b1010101;
    k = 5;
    printf("%d\n", (x >> (k-1) ) & 1);

    return 0;
}
