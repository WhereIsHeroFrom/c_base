#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ����ָ��
    // ָ������ָ��
    // const ��������*

    int a = 1;
    int b = 2;

    const int* pa = &a;
    // *pa = 520;
    pa = &b;
    printf("%d\n", *pa);

    return 0;
}