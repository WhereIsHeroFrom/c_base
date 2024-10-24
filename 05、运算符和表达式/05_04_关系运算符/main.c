#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
关系运算符（比较运算符）
    ==      a == b      等于 
    !=      a != b      不等于
    >       a  > b      大于
    >=      a >= b      大于等于
    <       a  < b      小于
    <=      a <= b      小于等于
*/

int main() {
    int a = 1, b = 2;
    printf("a == b -> %d\n", a == b);
    printf("a != b -> %d\n", a != b);
    printf("a  > b -> %d\n", a > b);
    printf("a >= b -> %d\n", a >= b);
    printf("a  < b -> %d\n", a < b);
    printf("a <= b -> %d\n", a <= b);

    return 0;
}
