#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int g_a = 1;
int g_b = 2;
const int c_g_c = 3;
const int c_g_d = 4;

/*
1、只要是静态的，无论是局部还是全局，无论是变量还是常量，都在全局区
2、非静态的，只要是全局的，无论是变量还是常量，都在全局区
3、字符串常量 也在 全局区
*/

int main() {
    printf("全局变量g_a的地址：%p\n", &g_a);
    printf("全局变量g_b的地址：%p\n", &g_b);
    int c = 3;
    int d = 4;
    printf("局部变量  c的地址：%p\n", &c);
    printf("局部变量  d的地址：%p\n", &d);

    static int e = 5;
    static const int f = 6;
    printf("静态变量  e的地址：%p\n", &e);
    printf("静态常量  f的地址：%p\n", &f);

    printf("字符串常量的地址：%p\n", &"英雄哪里出来");

    const int g = 7;
    const int h = 8;
    printf("局部常量  g的地址：%p\n", &g);
    printf("局部常量  h的地址：%p\n", &h);

    printf("全局常量c_g_c的地址：%p\n", &c_g_c);
    printf("全局常量c_g_d的地址：%p\n", &c_g_d);


    return 0;
}