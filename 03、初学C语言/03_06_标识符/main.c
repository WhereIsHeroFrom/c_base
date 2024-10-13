#include<stdio.h>

// 标识符

int main() {
    // 1、只能由 字母、数字、下划线(_)组成
    int a12_ = 1314;
    // 2、不能以数字开头
    // int 2b = 520; 不合法
    // 3、大小写敏感
    int a = 100;
    int A = 200;
    printf("%d", a);
    printf("%d", A);
    // 4、不能是关键字
    // int for = 4;

    // 5、软性要求：尽量让人能够看懂
    int heroHp = 100;
    int hhhhppppp = 100;

    return 0;
}