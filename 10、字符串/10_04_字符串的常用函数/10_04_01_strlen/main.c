#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = { 'a', 'b', 'c', '\0' };
    char str2[10] = "abc";
    char* str3 = "abc";
    
    int a = strlen(str1);
    int b = strlen(str2);
    int c = strlen(str3);
    printf("%d %d %d\n", a, b, c);

    for (int i = 0; i < a; ++i) {
        printf("%c", str1[i]);
    }
    printf("\n");
    return 0;
}