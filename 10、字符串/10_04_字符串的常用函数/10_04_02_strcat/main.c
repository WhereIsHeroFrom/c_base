#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = { 'a', 'b', 'c', '\0' };
    char str2[10] = "abc";
    char* str3 = "abc";
    strcat(str2, str1);    // abcabc
    printf("%s\n", str2);

    // strcat(str3, str1);   只读常量区的字符串，无法作为拼接的目标串
    strcat(str2, str1);    // abcabcabc
    //strcat(str2, str1);    // abcabcabcabc


    return 0;
}