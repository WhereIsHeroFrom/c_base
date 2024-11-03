#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}
int mod(int a, int b) {
    return a % b;
}

int main() {
    /*
    * 输入两个整数 a 和 b
    * 要求输出 加、减、乘、除、取余 的结果
    */
    int (*operation[5])(int, int) = { add, sub, mul, div, mod };  // 函数指针数组
    char op[5] = { '+', '-', '*', '/', '%' };
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < 5; ++i) {
        int ret = operation[i](a, b);
        printf("%d %c %d = %d\n", a, op[i], b, ret);
    }


    return 0;
}
