#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* get(int a[], int index) {
    return &a[index];
}

int main() {
    int arr[] = { 6,5,4,3,2,1 };
    int *p = get(arr, 2);
    printf("%d\n", *p);
    *p = 99;
    p = get(arr, 2);
    printf("%d\n", *p);

    return 0;
}
