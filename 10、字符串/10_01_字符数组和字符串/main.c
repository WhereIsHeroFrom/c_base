#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1���ַ�����
    char hl[] = { 'h', 'e', 'l', 'l', 'o'};
    int hlsize = sizeof(hl) / sizeof(char);
    for (int i = 0; i < hlsize; ++i) {
        printf("%c", hl[i]);
    }
    printf("\n");

    // char wd[] = { 'w', 'o', 'r', 'l', 'd', '\0' };
    char wd[611] = "world";
    wd[1] = '0';
    printf("%s\n", wd);
    printf("wdsize = %zu\n", sizeof(wd));

    // ֻ��������
    char* hhh = "heiheihei";
    // hhh[1] = '0';     ֻ�������������ݲ��ܽ����޸�
    char* hhh1 = "heiheihei";
    printf("%p\n%p\n", hhh, hhh1);


    return 0;
}