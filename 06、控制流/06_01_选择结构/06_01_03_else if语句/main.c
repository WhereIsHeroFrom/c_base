#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
【if语句】
    if(表达式) {
        执行语句;
    }

【if else语句】
    if(表达式) {
        执行语句1;
    }else {
        执行语句2;
    }

【else if语句】
    if(表达式1) {
        执行语句1;
    }else if(表达式2) {
        执行语句2;
    }else if(表达式3) {
        执行语句3;
    }else {
        执行语句n;
    }
    ...
*/

int main() {
    int a = -1;
    if (a > 0) {
        printf("a 是一个正数\n");
    }
    else if (a < 0) {
        printf("a 是一个负数\n");
    }
    else {
        printf("a 是 0 \n");
    }
    return 0;
}
