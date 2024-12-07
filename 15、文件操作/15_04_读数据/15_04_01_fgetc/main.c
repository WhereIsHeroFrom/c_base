#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fgetc

int main() {
    char name[] = "hhh\\fgetc.txt";
    FILE* f = fopen(name, "r");
    if (f == NULL) {
        printf("文件不存在！\n");
        return -1;
    }
    // fgetc 代表一次读取一个字符，如果读不到，返回 EOF
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