#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 7, b = 6;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    printf("a / b = %d\n", 7 / 6);   // 1
    printf("a / b = %d\n", -7 / 6);  // -1
    printf("a / b = %d\n", 7 / -6);  // -1
    printf("a / b = %d\n", -7 / -6); // 1

    printf("a * b = %d\n", 100000000 * 10000);

    return 0;
}
