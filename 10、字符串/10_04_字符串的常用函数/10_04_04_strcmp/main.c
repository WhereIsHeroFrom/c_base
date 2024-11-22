#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[5] = { '1', '2', '3', 'a', '\0' };
    char str2[10] = "123";
    char* str3 = "abcdefg";
    
    int cmp1 = strcmp(str1, str2);
    printf("%d\n", cmp1);
    int cmp2 = strcmp(str1, str3);
    printf("%d\n", cmp2);
    return 0;
}