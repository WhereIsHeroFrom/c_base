#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("%c\n", 'Y' + 1);
    printf("%c\n", 'Y' - 1);

    printf("%d\n", 'Y' + 1);
    printf("%d\n", 'Y' - 1);

    // 'A' + x;   如果 x 的值是 0 到 25，那是不是代表这个表达式的值是 'A' 到 大写的 'Z' 
    char ch;
    scanf("%c", &ch);
    printf("%c\n", 'A' + (ch - 'a'));

    return 0;
}
