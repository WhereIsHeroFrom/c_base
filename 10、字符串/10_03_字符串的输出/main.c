#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[199] = "abcdefg";
    printf("%s\n", str);
    puts(str);

    char* p = str;
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    return 0;
}