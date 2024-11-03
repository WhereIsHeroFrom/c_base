#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1、定义三个变量
    int a = 1, b = 2, c = 3;

    // 2、定义一个指针数组
    int* parr[3] = {&b, &a, &c};

    //3、获取指针数组中元素的值
    int *pa = parr[1];
    int *pb = parr[0];
    int* pc = parr[2];

    // 4、打印
    printf("*pa=%d,    *pb=%d,   *pc=%d\n", *pa, *pb, *pc);
    printf("  a=%d,      b=%d,     c=%d\n", a, b, c);

    // 5、指针数组的实际意义
    // 把多种不同类型的变量，存储在一个数组中
    int x = 6;
    double y = 7;
    char z = '8';

    void* p[] = { &x, & y, & z };
    char t[] = { 'i', 'f', 'c' };



    return 0;
}
