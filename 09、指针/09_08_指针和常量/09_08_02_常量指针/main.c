#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 常量指针
    // 指向常量的指针
    // const 数据类型*

    int a = 1;
    int b = 2;

    const int* pa = &a;
    // *pa = 520;
    pa = &b;
    printf("%d\n", *pa);

    return 0;
}