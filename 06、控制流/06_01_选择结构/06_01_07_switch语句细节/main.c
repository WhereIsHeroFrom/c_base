#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    1、表达式: 计算结果只能为 (字符/整数)
    2、case: 值 只能是(字符/整数)的字面量, 不能是变量
    3、case: 值 不允许重复
    4、break: 表示中断，结束 switch 语句 (某些情况下，可以不写) case穿透
    5、default: 所有情况都不匹配，执行这里的内容
*/

int main() {
    int score;
    printf("请输入学生成绩：");
    scanf("%d", &score);

    switch (score / 10) {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5:
        printf("E\n");
        break;
    default:
        printf("F\n");
    }
    return 0;
}
