#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 指向的数据类型 * 指针名;
    // 数据类型 *     * 指针名;
    // int** ppa;

    // 1、定义一个整型变量
    int a = 10;

    // 2、定义一个指向变量a的指针
    int* pa = &a;

    // 3、定义一个指向真正变量pa的指针
    int** ppa = &pa;

    printf("pa    =  %p\n", pa);
    printf("ppa   =  %p\n", ppa);
    printf("*ppa  =  %p\n", *ppa);
    printf("**ppa =  %d\n", **ppa);

    // ppa = && a;
    // ppa = &(&a);
    // pa = &10;

    return 0;
}