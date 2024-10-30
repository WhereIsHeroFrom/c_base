#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 数据类型 数组名[长度] = {初始值1, 初始值2, 初始值3 };
    int scores[] = { 59, 95, 100 };
    printf("%zu\n", sizeof(scores) / sizeof(int));
    // int x[4] = { 1,2,3,4,5 }; 非法
    int x[4] = { 7, 6 };
    // 整数默认值  0
    // 小数默认值  0.0
    // 字符默认值  '\0'
    return 0;
}