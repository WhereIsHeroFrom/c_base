#include <stdio.h>

int main() {
    // 1、字符串常量
    "英雄哪里出来";

    // 2.1、字符串变量 （第一种写法）
    // char 变量名[长度] = "字符串常量";
    char a[100] = "英雄哪里出来";  // string 的第一个字母 s
    printf("%s\n", a);

    // 2.2、字符串变量（第二种写法）
    // char 变量名[] = "字符串常量";
    char b[15] = "夜深人静写算法";
    printf("%s\n", b);

    // 3、sizeof 测量长度
    printf("%zu\n", sizeof("英雄哪里出来"));
    printf("%zu\n", sizeof("Hero"));
    printf("%zu\n", sizeof(a));  // 100
    printf("%zu\n", sizeof(b));  // 15

    // 4、字符在字符串中的访问
    char c[] = "HelloThankyou";
    char d = c[6];
    printf("第 6 个字符是 %c\n", d);

    // 5、字符的修改
    c[5] = ' ';
    printf("%s\n", c);

    // 6、字符串的结束标志 '\0';
    printf("%c\n", c[10]);
    printf("%c\n", c[11]);
    printf("%c\n", c[12]);
    printf("%c\n", c[13]);
    printf("%d\n", c[13]);
    return 0;
}