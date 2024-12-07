#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[] = "hhh\\gg.txt";
    FILE *f = fopen(name, "r");
    if (f == NULL) {
        printf("文件不存在！\n");
        return -1;
    }

    // 读取数据

    fclose(f);

    return 0;
}