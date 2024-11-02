#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    const int* const pa = &a;

    // *pa = 6;
    // pa = &b;

    return 0;
}

/*
指针常量             type* const           指针的值是一个常量            指针无法被赋值
常量指针             const type*           指向常量的指针                指针解引用无法被赋值
常量指针常量         const type* const     指针值和指向值都是常量        指针和解引用都无法被赋值
*/
