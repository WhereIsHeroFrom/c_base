#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int* p1;
    short* p2;
    char* p3;
    double* p4;
    long long* p5;

    printf("%zu\n", sizeof(p1));
    printf("%zu\n", sizeof(p2));
    printf("%zu\n", sizeof(p3));
    printf("%zu\n", sizeof(p4));
    printf("%zu\n", sizeof(p5));
    return 0;
}
