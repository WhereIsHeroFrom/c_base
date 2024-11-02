#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 空指针

int main() {
    int* p1 = NULL;
    // printf("%d\n", *p1);
    int* p2;
    //printf("%d\n", *p2);
    if (p1 == NULL) {
        printf("p1 是一个空指针！\n");
    }
    return 0;
}
