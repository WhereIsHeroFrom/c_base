#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[5] = { '1', '2', '3', '\0' };
    char str2[10] = "abcdef";
    char* str3 = "abcdefg";
    // 1、正常拷贝
    strcpy(str2, str3);
    printf("%s\n%s\n", str2, str3);

    // 2、长度不够的情况
    // strcpy(str1, str3);
    
    // 3、...
    strcpy(str2, str1);
    printf("%s\n%s\n", str2, str1);
    for (int i = 0; i < 6; ++i) {
        printf("(%c)", str2[i]);
    }

    return 0;
}