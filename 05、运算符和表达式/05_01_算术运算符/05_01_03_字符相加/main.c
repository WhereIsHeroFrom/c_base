#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("%c\n", 'Y' + 1);
    printf("%c\n", 'Y' - 1);

    printf("%d\n", 'Y' + 1);
    printf("%d\n", 'Y' - 1);

    // 'A' + x;   ��� x ��ֵ�� 0 �� 25�����ǲ��Ǵ���������ʽ��ֵ�� 'A' �� ��д�� 'Z' 
    char ch;
    scanf("%c", &ch);
    printf("%c\n", 'A' + (ch - 'a'));

    return 0;
}
