#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ָ����������� * ָ����;
    // �������� *     * ָ����;
    // int** ppa;

    // 1������һ�����ͱ���
    int a = 10;

    // 2������һ��ָ�����a��ָ��
    int* pa = &a;

    // 3������һ��ָ����������pa��ָ��
    int** ppa = &pa;

    printf("pa    =  %p\n", pa);
    printf("ppa   =  %p\n", ppa);
    printf("*ppa  =  %p\n", *ppa);
    printf("**ppa =  %d\n", **ppa);

    // ppa = && a;
    // ppa = &(&a);
    // pa = &10;

    return 0;
}