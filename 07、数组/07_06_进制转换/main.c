#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
除留余数法

当前数     商     余数
  14        7       0
   7        3       1
   3        1       1
   1        0       1

14 -> 1110
*/

int main() {
    int curr, quo, rem[32];
    int size = 0;
    int base = 9;
    //curr = 14;
    scanf("%d", &curr);
    while (curr) {
        quo = curr / base;
        rem[size] = curr % base;
        size++;
        curr = quo;
    }
    for (int i = size - 1; i >= 0; --i) {
        printf("%d", rem[i]);
    }
    printf("\n");

    return 0;
}