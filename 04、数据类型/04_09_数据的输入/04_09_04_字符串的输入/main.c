#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // &;
    /*
    char str[100];
    printf("������������֣�");
    scanf("%s", str);
    printf("��������ǣ�%s\n", str);
    
    char str[100];
    char ch;
    scanf("%s", str);
    ch = str[0];
    printf("%c\n", ch);

    */
    char str[100];
    gets(str);
    printf("%s\n", str);

    return 0;
}