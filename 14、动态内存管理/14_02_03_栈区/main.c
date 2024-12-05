#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* func() {
    char c[20] = "Ó¢ĞÛÄÄÀï³öÀ´";
    printf("%s\n", c);
    return c;
}

void test(int a, int b) {
    int c, d;
    printf("&a = %p\n", &a);
    printf("&b = %p\n", &b);
    printf("&c = %p\n", &c);
    printf("&d = %p\n", &d);

}

int main() {
    printf("%s\n", func());
    test(5, 6);
    return 0;
}