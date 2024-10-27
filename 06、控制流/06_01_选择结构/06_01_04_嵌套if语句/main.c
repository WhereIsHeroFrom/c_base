#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
要求输入一个分数
分数在 0 到 100 之间
则根据规则输出 A、B、C、D、E
这几个档次
90 - 100    输出  A
80 - 89     输出  B
70 - 79     输出  C
60 - 69     输出  D
< 60        输出  E
如果分数不在 0 到 100 之间
则 输出 Error
*/
int main() {
    int score;
    printf("请输入你的成绩：");
    scanf("%d", &score);
    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            printf("A\n");
        }
        else if (score >= 80) {
            printf("B\n");
        }
        else if (score >= 70) {
            printf("C\n");
        }
        else if (score >= 60) {
            printf("D\n");
        }
        else {
            printf("E\n");
        }
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}
