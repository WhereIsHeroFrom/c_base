#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1、指针的定义
    // 数据类型 * 指针变量名;
    int* pa;

    // 2、指针的初始化
    // 数据类型 * 指针变量名 = &某个变量;
    int b;
    int* pb = &b;   // 取地址符

    double c;
    double* pc = &c;

    char d;
    char* pd = &d;
    // pd = &c;      非法

    // pointer
    printf("b的内存地址是：%p\n", pb);
    printf("c的内存地址是：%p\n", pc);
    printf("d的内存地址是：%p\n", pd);

    int arr[] = { 9,8,7,6,5 };
    printf("%p\n", &arr[0]);   // 28  29  2A  2B
    printf("%p\n", &arr[1]);   // 2C  2D  2E  2F
    printf("%p\n", &arr[2]);   // 30  31  32  33
    printf("%p\n", &arr[3]);   // 34  35  36  37
    printf("%p\n", &arr[4]);   // 38  39  3A  3B


    return 0;
}
