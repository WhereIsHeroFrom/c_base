#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // �������� ������[����] = {��ʼֵ1, ��ʼֵ2, ��ʼֵ3 };
    int scores[] = { 59, 95, 100 };
    printf("%zu\n", sizeof(scores) / sizeof(int));
    // int x[4] = { 1,2,3,4,5 }; �Ƿ�
    int x[4] = { 7, 6 };
    // ����Ĭ��ֵ  0
    // С��Ĭ��ֵ  0.0
    // �ַ�Ĭ��ֵ  '\0'
    return 0;
}