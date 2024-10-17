#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
输出：printf
输入：scanf
*/

int main() {
    /*
    int a = 1314;
    printf("请输入你的年龄：");
    scanf("%d", &a);
    printf("你的年龄是：%d\n", a);
    */
    int x, y;
    printf("请输入两个数 x 和 y：");
    scanf("%d%d", &x, &y);
    printf("x+y = %d\n", x+y);

    short b;
    long long c;
    scanf("%hd %lld", &b, &c);
    printf("%hd %lld\n", b, c);

    return 0;
}