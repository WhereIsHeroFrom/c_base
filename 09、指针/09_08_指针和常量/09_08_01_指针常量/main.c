#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ָ�볣��
    int a = 1;
    int b = 2;
    // ָ�볣��
    // ָ���ֵ��һ������
    int* const pa = &a;
    // pa = &b;  ��ֵ�Ǹ����������ܱ��޸�
    *pa = 1314;
    printf("%d\n", a);

    return 0;
}