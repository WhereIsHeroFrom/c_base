#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ָ��

int* func() {
    int a = 56;
    printf("pa = %p\n", &a);
    return &a;
}

int main() {
    int *p = func();
    printf("p  = %p\n", p);
    printf("v  = %d\n", *p);
    return 0;
}