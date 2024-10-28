#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
while语句

    1、初始化语句
    while( 2、条件判断语句 ) {
        3、循环体语句;
        4、条件控制语句;
    }
    ...

*/
int main() {
    int n;
    printf("请输入一个整数n：");
    scanf("%d", &n);
    // 1、初始化语句
    int sum = 0;
    int i = 1;
    while (i <= n) {    // 2、条件判断语句
        sum = sum + i;  // 3、循环体语句;
        ++i;            // 4、条件控制语句;
    }
    printf("sum=%d, i=%d\n", sum, i);
    return 0;
}