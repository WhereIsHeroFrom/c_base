#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* getArray(int* a, int size) {
    int *ret = malloc(size * sizeof(int));
    if (ret == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; ++i) {
        ret[i] = a[i] * a[i];
    }
    return ret;
}

int main() {
    int a[] = { 6,7,8,9,4 };
    int size = sizeof(a) / sizeof(int);
    int *p = getArray(a, size);
    for (int i = 0; i < size; ++i) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}