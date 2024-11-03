#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* func(int a, int b);

int main() {
    // 返回值类型 *函数名(参数列表);
    // 1、可以返回空指针，但是要对空指针进行判空处理，否则解引用就会出错
    // 2、不要返回一个野指针或者悬空指针，这样会导致程序出现未定义行为

    return 0;
}
