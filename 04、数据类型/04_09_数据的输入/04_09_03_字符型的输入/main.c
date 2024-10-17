#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*
    char ch;
    printf("请输入一个字符：");
    scanf("%c", &ch);
    printf("你输入的字符为；%c\n", ch);
    */
    char a, b;
    printf("请输入两个字符：");
    scanf("%c%c", &a, &b);
    printf("你输入的两个字符为：%c 和 %d", a, b);  // 32 == space

    return 0;
}