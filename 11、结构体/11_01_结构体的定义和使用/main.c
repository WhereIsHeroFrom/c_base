#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1、结构体的定义
// struct 结构体名 { 结构体成员变量列表 };
struct Book {
    char name[100];
    double price;
    int value;
}cpp;

int main() {
    // 2、结构体的创建（使用）
    // 2.1、struct 结构体名 变量名;
    struct Book c;
    strcpy(c.name, "C语言程序设计");
    c.price = 999;
    c.value = 10000000;
    printf("%s的价格是%.2lf，价值是%d\n", c.name, c.price, c.value );

    // 2.2、struct 结构体名 变量名 = {  初始化列表 };
    struct Book py = { "Python入门到精通", 999, 1000000 };
    printf("%s的价格是%.2lf，价值是%d\n", py.name, py.price, py.value);

    // 2.3、直接创建
    strcpy(cpp.name, "C++零基础编程");
    cpp.price = 399;
    cpp.value = 1000000;
    printf("%s的价格是%.2lf，价值是%d\n", cpp.name, cpp.price, cpp.value);

    return 0;
}
