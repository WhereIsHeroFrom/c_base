#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
do while 语句
    
     1、初始化语句;
     do {
         2、循环体语句;
         3、条件控制语句;
     }while( 4、条件判断语句 );
*/

int main() {
    int n;
    scanf("%d", &n);
    // 1、初始化语句;
    int sum = 0;
    int i = 0;
    do {
        sum = sum + i;   // 2、循环体语句;
        ++i;             // 3、条件控制语句;
    } while (i <= n);    // 4、条件判断语句
    printf("i=%d, sum=%d\n", i, sum);

    return 0;
}