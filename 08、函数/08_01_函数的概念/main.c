#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // function: 功能
    printf("请输入一个数\n");
    int x;
    scanf("%d", &x);
    int y = abs(x);
    printf("y = %d\n", y);

    return 0;
}