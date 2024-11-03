#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 利用指针来访问数组元素
    int a[5] = { 5,4,3,2,1 };
    printf("数组第0个元素：%d\n", a[0]);

    int* p = &a[0];  // int *p = a;
    printf("a      的值：%p\n", a);
    printf("&a[0]  的值：%p\n", &a[0]);
    printf("*p     的值：%d\n", *p);

    printf("&a[1]  的值：%p\n", &a[1]);
    printf("p+1    的值：%p\n", p+1);
    printf("*(p+1) 的值：%d\n", *(p + 1));
    printf("------------------------------------------------\n");

    printf("&a[2]  的值：%p\n", &a[2]);
    printf("p+2    的值：%p\n", p + 2);
    printf("*(p+2) 的值：%d\n", *(p + 2));
    printf("------------------------------------------------\n");

    // *(p + i) == a[i]

    p++;   // p = p + 1;
    printf("*p 的值：%d\n", *p);

    // a++; 语法错误



    return 0;
}
