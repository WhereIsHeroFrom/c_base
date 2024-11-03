#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func1();
int func2(int a);

/*
函数返回值类型 函数名(函数参数列表);

函数返回值类型 (*函数指针名)(函数参数列表) = 函数名;
*/

int main() {
    void (*p1)() = func1;
    int (*p2)(int a) = func2;

    p1();      // func1();
    p2(15);    // func2(15);

    return 0;
}

void func1() {
    printf("func1\n");
}

int func2(int a) {
    printf("func2: %d\n", a);
    return a * a;
}
