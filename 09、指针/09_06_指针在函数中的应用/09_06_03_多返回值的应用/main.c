#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void minmax(int a[], int aSize, int *pmax, int *pmin) {
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < aSize; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    *pmax = max;
    *pmin = min;
}

int main() {
    int a[] = { 8,7,6,5,19,8,7,6,7,8,9 };
    int aSize = sizeof(a) / sizeof(int);
    //int m = max(a, aSize);
    // printf("max = %d\n", m);
    int min, max;
    minmax(a, aSize, &max, &min);
    printf("min = %d, max = %d\n", min, max);
    return 0;
}
