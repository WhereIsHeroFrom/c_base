#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*
    char ch;
    printf("������һ���ַ���");
    scanf("%c", &ch);
    printf("��������ַ�Ϊ��%c\n", ch);
    */
    char a, b;
    printf("�����������ַ���");
    scanf("%c%c", &a, &b);
    printf("������������ַ�Ϊ��%c �� %d", a, b);  // 32 == space

    return 0;
}