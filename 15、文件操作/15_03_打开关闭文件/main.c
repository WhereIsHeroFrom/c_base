#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[] = "hhh\\gg.txt";
    FILE *f = fopen(name, "r");
    if (f == NULL) {
        printf("�ļ������ڣ�\n");
        return -1;
    }

    // ��ȡ����

    fclose(f);

    return 0;
}