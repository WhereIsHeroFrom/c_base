#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 函数的值传递

/*
字节数|4|4|4|4| 4 |
变量名|a|b|a|b|tmp|
变量值|6|9|9|6| 6 |

字节数|4|4|
变量名|a|b|
变量值|6|9|
*/

void swap(int a, int b) {
    printf("a=%d, b=%d\n", a, b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a=%d, b=%d\n", a, b);
}

int main() {
    int a = 6, b = 9;
    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}