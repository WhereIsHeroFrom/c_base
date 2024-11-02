#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 指针常量
    int a = 1;
    int b = 2;
    // 指针常量
    // 指针的值是一个常量
    int* const pa = &a;
    // pa = &b;  左值是个常量，不能被修改
    *pa = 1314;
    printf("%d\n", a);

    return 0;
}