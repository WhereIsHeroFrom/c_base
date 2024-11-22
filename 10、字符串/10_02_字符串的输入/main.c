#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char str[1000];
    // char* str = NULL;
    // scanf("%s", str);
    gets(str);
    printf("%s\n", str);

    return 0;
}