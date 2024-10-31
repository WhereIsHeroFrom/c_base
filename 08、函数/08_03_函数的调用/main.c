#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {
    int c = a + b;
    return c;
}

int sum(int n) {
    /*int s = 0;
    for (int i = 1; i <= n; ++i) {
        s = s + i;
    }*/
    return (1 + n) * n / 2;
}

int main() {
    int x = add(5, 6);  // 5 + 6
    printf("x=%d\n", x);
    printf("sum(6)=%d\n", sum(6));

    return 0;
}