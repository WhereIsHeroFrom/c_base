#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// “∞÷∏’Î

int main() {
    int a = 11;
    int* pa = &a;
    printf("*pa = %d\n", *pa);
    printf("pa =  %p\n", pa);

    int* pb = pa + 4;
    printf("pb =  %p\n", pb);
    printf("*pb=  %d\n", *pb);

    return 0;
}
