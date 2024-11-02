#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void 类型的指针

void Print(void* data, char type) {
    switch (type) {
    case 'i':
        printf("%d\n", *(int*)data);
        break;
    case 'f':
        printf("%lf\n", *(double*)data);
        break;
    case 'c':
        printf("%c\n", *(char*)data);
        break;
    }
}

int main() {
    // 1、定义两个变量
    int a = 1314;
    double b = 520.0;

    // 2、定义两个指针
    int* pa = &a;
    double* pb = &b;

    // 3、打印出两个变量的值
    printf("a = %d\n", *pa);
    printf("b = %lf\n", *pb);

    // pb = &a;

    void* pc = &a;
    void* pd = &b;

    // printf("%d\n", *pc);    不能进行解引用
    // printf("%p\n", pc + 1); 不能进行运算

    int x1 = 520;
    double x2 = 1314.520;
    char x3 = 'o';
    Print(&x1, 'i');
    Print(&x2, 'f');
    Print(&x3, 'c');

    return 0;
}