#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
switch (���ʽ) {
    case �������ʽ1:
        ִ�����1;
        break;
    case �������ʽ2:
        ִ�����2;
        break;
   ...
    default:
        ִ��Ĭ�����;
}
*/

int main() {
    int day;
    printf("������һ������(1-7)��");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("����һ\n");
        break;
    case 2:
        printf("���ڶ�\n");
        break;
    case 3:
        printf("������\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("������\n");
        break;
    case 6:
        printf("������\n");
        break;
    case 7:
        printf("������\n");
        break;
    default:
        printf("������������� 1 - 7\n");
        break;
    }

    return 0;
}
