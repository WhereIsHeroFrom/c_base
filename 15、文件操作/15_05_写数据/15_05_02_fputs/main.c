#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fputs

int main() {
    char name[] = "hhh\\fputs.txt";
    FILE* f = fopen(name, "w");
    if (f == NULL) {
        printf("文件打开失败!\n");
        return -1;
    }
    char* hero = "where is hero from";
    int x = fputs(hero, f);
    printf("%d\n", x);

    fclose(f);
    return 0;
}