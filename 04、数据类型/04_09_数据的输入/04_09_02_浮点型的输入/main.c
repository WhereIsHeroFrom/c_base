#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    double d = 520;
    printf("请输入一个浮点数：");
    scanf("%lf", &d);
    printf("你输入的浮点数为：%.3lf\n", d);
    return 0;
}
