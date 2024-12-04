#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// malloc

int* getArray(int size) {
    return malloc(size * sizeof(int));
}

int main() {
    int size = 10;
    int *p = malloc(size * sizeof(int));
    printf("%p\n", p);
    for (int i = 0; i < size; ++i) {
        *(p + i) = i * 10;
    }
    for (int i = 0; i < size; ++i) {
        printf("%d ", p[i]);
    }
    int* b = getArray(size * 2);

    return 0;
}