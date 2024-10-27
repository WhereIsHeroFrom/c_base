#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if else 语句

int main() {
    /*
        int a = -1;
        if (a >= 0) {
            printf("a 是一个非负数\n");
        }
        if (a < 0) {
            printf("a 是一个负数\n");
        }
    */
    /*
        if else 的语法
        if(表达式) {
            执行语句1;
        }else {
            执行语句2;
        }
    */
    int a = -1;
    if (a >= 0) {
        printf("a 是一个非负数\n");
    } else {
        printf("a 是一个负数\n");
    }

    return 0;
}
