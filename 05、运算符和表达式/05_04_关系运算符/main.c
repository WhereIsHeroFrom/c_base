#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
��ϵ��������Ƚ��������
    ==      a == b      ���� 
    !=      a != b      ������
    >       a  > b      ����
    >=      a >= b      ���ڵ���
    <       a  < b      С��
    <=      a <= b      С�ڵ���
*/

int main() {
    int a = 1, b = 2;
    printf("a == b -> %d\n", a == b);
    printf("a != b -> %d\n", a != b);
    printf("a  > b -> %d\n", a > b);
    printf("a >= b -> %d\n", a >= b);
    printf("a  < b -> %d\n", a < b);
    printf("a <= b -> %d\n", a <= b);

    return 0;
}
