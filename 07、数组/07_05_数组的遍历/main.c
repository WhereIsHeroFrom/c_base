#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[] = { 9,8,7,6,5,5,6,7,6,6,5,5,4,4,3,3,4,5,6,7,8,8,8,9,8,7,6,5,5,4 };
    // 索引\小标
    // 1、获取
    // 数组名[索引]
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[3]);
    printf("%d\n", a[4]);

    int size = sizeof(a) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        int tmp = a[i];
        printf("%d\n", tmp);
    }

    return 0;
}