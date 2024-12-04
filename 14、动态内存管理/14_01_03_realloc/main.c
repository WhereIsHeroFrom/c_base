#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// realloc

int main() {
    int size = 10;
    int* p = malloc(size * sizeof(int));
    printf("%p\n", p);
    for (int i = 0; i < 10; ++i) {
        p[i] = i;
    }
    size = 100;
    p = realloc(p, size * sizeof(int));
    printf("%p\n", p);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", p[i]);
    }
    return 0;
}