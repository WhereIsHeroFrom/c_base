#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 函数的声明（函数原型）
int add(int, int);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    // 实际参数
    int z = add(x, y);
    printf("x+y=%d\n", z);
    return 0;
}

// 形式参数
int add(int a, int b) {
    return a + b;
}