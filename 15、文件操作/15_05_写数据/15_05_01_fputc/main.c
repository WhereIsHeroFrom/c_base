#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fputc

int main() {
    char name[] = "hhh\\fputc.txt";
    FILE *f = fopen(name, "w");
    if (f == NULL) {
        printf("文件打开失败!\n");
        return -1;
    }
    int x = fputc(97, f);
    printf("%d\n", x);
    x = fputc(98, f);
    printf("%d\n", x);
    char* hero = "where is hero from";
    for (int i = 0; hero[i]; ++i) {
        fputc(hero[i], f);
    }
    fclose(f);
    return 0;
}