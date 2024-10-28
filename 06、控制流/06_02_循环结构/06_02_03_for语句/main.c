#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
for语句

     for(初始化语句;  条件判断语句; 条件控制语句) {
        循环体语句;
     }
*/

int main() {
    int n;
    printf("请输入一个整数n：");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + i;   // sum += i;
    }
    printf("%d\n", sum);
    return 0;
}