#include <stdio.h>

int main() {
    // 1���ַ�������
    "Ӣ���������";

    // 2.1���ַ������� ����һ��д����
    // char ������[����] = "�ַ�������";
    char a[100] = "Ӣ���������";  // string �ĵ�һ����ĸ s
    printf("%s\n", a);

    // 2.2���ַ����������ڶ���д����
    // char ������[] = "�ַ�������";
    char b[15] = "ҹ���˾�д�㷨";
    printf("%s\n", b);

    // 3��sizeof ��������
    printf("%zu\n", sizeof("Ӣ���������"));
    printf("%zu\n", sizeof("Hero"));
    printf("%zu\n", sizeof(a));  // 100
    printf("%zu\n", sizeof(b));  // 15

    // 4���ַ����ַ����еķ���
    char c[] = "HelloThankyou";
    char d = c[6];
    printf("�� 6 ���ַ��� %c\n", d);

    // 5���ַ����޸�
    c[5] = ' ';
    printf("%s\n", c);

    // 6���ַ����Ľ�����־ '\0';
    printf("%c\n", c[10]);
    printf("%c\n", c[11]);
    printf("%c\n", c[12]);
    printf("%c\n", c[13]);
    printf("%d\n", c[13]);
    return 0;
}