#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ������ַ����

void swap(int* x, int* y) {
    printf("����ǰ��x��ֵ  ��%p��y��ֵ  ��%p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 1, b = 2;
    printf("����ǰ��a�ĵ�ַ��%p��b�ĵ�ַ��%p\n", &a, &b);
    swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);

    return 0;
}
