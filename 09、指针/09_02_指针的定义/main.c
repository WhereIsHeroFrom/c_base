#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1��ָ��Ķ���
    // �������� * ָ�������;
    int* pa;

    // 2��ָ��ĳ�ʼ��
    // �������� * ָ������� = &ĳ������;
    int b;
    int* pb = &b;   // ȡ��ַ��

    double c;
    double* pc = &c;

    char d;
    char* pd = &d;
    // pd = &c;      �Ƿ�

    // pointer
    printf("b���ڴ��ַ�ǣ�%p\n", pb);
    printf("c���ڴ��ַ�ǣ�%p\n", pc);
    printf("d���ڴ��ַ�ǣ�%p\n", pd);

    int arr[] = { 9,8,7,6,5 };
    printf("%p\n", &arr[0]);   // 28  29  2A  2B
    printf("%p\n", &arr[1]);   // 2C  2D  2E  2F
    printf("%p\n", &arr[2]);   // 30  31  32  33
    printf("%p\n", &arr[3]);   // 34  35  36  37
    printf("%p\n", &arr[4]);   // 38  39  3A  3B


    return 0;
}
