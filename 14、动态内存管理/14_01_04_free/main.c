#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// free

int main() {
    int size = 10;
    int* p = malloc(size * sizeof(int));
    printf("%p\n", p);
    for (int i = 0; i < 10; ++i) {
        p[i] = i;
    }
    free(p);   // Ðü¿ÕÖ¸Õë
    p = NULL;
    if (p != NULL) {
        printf("%d\n", *p);
    }
    

    return 0;
}