#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // &;
    /*
    char str[100];
    printf("请输入你的名字：");
    scanf("%s", str);
    printf("你的名字是：%s\n", str);
    
    char str[100];
    char ch;
    scanf("%s", str);
    ch = str[0];
    printf("%c\n", ch);

    */
    char str[100];
    gets(str);
    printf("%s\n", str);

    return 0;
}