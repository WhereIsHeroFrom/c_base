#include <stdio.h>

int main() {
    // �ַ����� �ַ������� = �ַ�����;
    char a = 'y';  // -128 ~ 127
    printf("%c\n", a);
    char b = '8';
    printf("%c\n", b);
    
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof('@'));

    printf("%d\n", a);
    char c = 123;
    // c = '{';
    printf("%c\n", c);

    return 0;
}