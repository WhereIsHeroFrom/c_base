#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 语句 = 表达式 + 分号 （表达式;）
    // 选择结构：if 和 switch case
    // if 语句
    // if(表达式 != 0) {
    //      执行语句;
    // }
    int a = -1;
    if (a > 0) {  
        printf("a是一个正数\n");
    }
    if (a < 0) {
        printf("a是一个负数\n");
    }
    if (1) {
        printf("这里永远可以运行到\n");
    }
    if (0) {
        printf("这里永远都运行不到\n");
    }
    if (a) {
        printf("a是一个非0的数\n");
    }
    if (!a) {
        printf("a的值等于0\n");
    }
    if (a >> 5 & 0b111) { // 32个1 
        printf("啊?\n");
    }
    if (a == 0) {
        printf("a的值是0\n");
        printf("a的值是0\n");
    }

    return 0;
}
