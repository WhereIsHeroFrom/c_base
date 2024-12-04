#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// c alloc

int main() {
    int size = 10;
    int *p = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(p+i));
    }

    return 0;
}