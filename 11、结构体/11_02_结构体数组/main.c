#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1、结构体定义
// struct 结构体名 { 结构体成员变量列表 };
struct Book {
    char name[100];
    double price;
    int value;
};

int main() {
    // 2、创建一个结构体数组
    // struct 结构体名 数组名[元素个数] = { {}, {}, {}, ... };
    struct Book books[3] = {
        {"C语言程序设计", 999, 7111},    // 第0个结构体
        {"Python零基础编程", 699, 800},  // 第1个结构体
        {"C++零基础编程", 399, 1000000}  // 第2个结构体
    };
    strcpy(books[2].name, "C++入门到入土！");

    for (int i = 0; i < 3; ++i) {
        struct Book tmp = books[i];
        printf("%s的价格是%.2lf，价值是%d\n", tmp.name, tmp.price, tmp.value);
    }

    return 0;
}
