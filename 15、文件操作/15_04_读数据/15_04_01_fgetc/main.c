#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fgetc

int main() {
    char name[] = "hhh\\fgetc.txt";
    FILE* f = fopen(name, "r");
    if (f == NULL) {
        printf("�ļ������ڣ�\n");
        return -1;
    }
    // fgetc ����һ�ζ�ȡһ���ַ������������������ EOF
    //char c = fgetc(f);
    //printf("%c\n", c);
    //c = fgetc(f);
    //printf("%c\n", c);
    //c = fgetc(f);
    //printf("%c\n", c);
    //c = fgetc(f);
    //printf("%d\n", c);
    //c = fgetc(f);
    //printf("%d\n", c);
    // EOF end of file

    char c;
    while ( (c = fgetc(f)) != EOF ) {
        printf("%c", c);
    }

    return 0;
}