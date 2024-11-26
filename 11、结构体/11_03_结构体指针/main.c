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
    struct Book b = { "C语言入门到精通", 999, 1912992 };
    struct Book c = b;
    printf("%s的价格是%.2lf，价值是%d\n", c.name, c.price, c.value);
    c.price = 399.99;
    printf("%s的价格是%.2lf，价值是%d\n", b.name, b.price, b.value);
    printf("%p\n%p\n", &b, &c);
    // struct 结构体名 * 变量名;
    struct Book* pb = &b;
    //(*pb).price = 399.99;
    pb->price = 399.99;
    printf("%s的价格是%.2lf，价值是%d\n", b.name, b.price, b.value);


    return 0;
}
