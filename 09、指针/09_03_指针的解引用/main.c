#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 10;
    int* pa = &a;
    // ������:  *ָ�������
    printf("*pa = %d\n", *pa);
    a = 11;
    printf("*pa = %d\n", *pa);
    // �޸����ݣ�   *ָ������� = ֵ;
    *pa = 12;
    printf("*pa = %d\n", *pa);
    printf("a = %d\n", a);
    return 0;
}
