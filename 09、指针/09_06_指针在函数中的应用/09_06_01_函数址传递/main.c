#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 函数的址传递

void swap(int* x, int* y) {
    printf("交换前：x的值  ：%p，y的值  ：%p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 1, b = 2;
    printf("交换前：a的地址：%p，b的地址：%p\n", &a, &b);
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    return 0;
}
