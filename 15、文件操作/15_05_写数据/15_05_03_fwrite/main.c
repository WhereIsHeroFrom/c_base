#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fwrite

int main() {
    char name[] = "hhh\\fwrite.txt";
    FILE* f = fopen(name, "w");
    if (f == NULL) {
        printf("文件打开失败!\n");
        return -1;
    }
    char* str = "abcdefg";
    int x = fwrite(str, 1, 3, f);
    printf("%d\n", x);

    fclose(f);
    return 0;
}