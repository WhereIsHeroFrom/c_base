#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ����ָ������������Ԫ��
    int a[5] = { 5,4,3,2,1 };
    printf("�����0��Ԫ�أ�%d\n", a[0]);

    int* p = &a[0];  // int *p = a;
    printf("a      ��ֵ��%p\n", a);
    printf("&a[0]  ��ֵ��%p\n", &a[0]);
    printf("*p     ��ֵ��%d\n", *p);

    printf("&a[1]  ��ֵ��%p\n", &a[1]);
    printf("p+1    ��ֵ��%p\n", p+1);
    printf("*(p+1) ��ֵ��%d\n", *(p + 1));
    printf("------------------------------------------------\n");

    printf("&a[2]  ��ֵ��%p\n", &a[2]);
    printf("p+2    ��ֵ��%p\n", p + 2);
    printf("*(p+2) ��ֵ��%d\n", *(p + 2));
    printf("------------------------------------------------\n");

    // *(p + i) == a[i]

    p++;   // p = p + 1;
    printf("*p ��ֵ��%d\n", *p);

    // a++; �﷨����



    return 0;
}
