#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 10;
    int* pa = &a;
    // 解引用:  *指针变量名
    printf("*pa = %d\n", *pa);
    a = 11;
    printf("*pa = %d\n", *pa);
    // 修改数据：   *指针变量名 = 值;
    *pa = 12;
    printf("*pa = %d\n", *pa);
    printf("a = %d\n", a);
    return 0;
}
