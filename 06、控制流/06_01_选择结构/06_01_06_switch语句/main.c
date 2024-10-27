#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
switch (表达式) {
    case 常量表达式1:
        执行语句1;
        break;
    case 常量表达式2:
        执行语句2;
        break;
   ...
    default:
        执行默认语句;
}
*/

int main() {
    int day;
    printf("请输入一个数字(1-7)：");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("星期一\n");
        break;
    case 2:
        printf("星期二\n");
        break;
    case 3:
        printf("星期三\n");
        break;
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n");
        break;
    case 6:
        printf("星期六\n");
        break;
    case 7:
        printf("星期日\n");
        break;
    default:
        printf("输入错误，请输入 1 - 7\n");
        break;
    }

    return 0;
}
