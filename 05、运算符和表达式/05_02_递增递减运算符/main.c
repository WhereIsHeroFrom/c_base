#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ++ 递增运算符
// -- 递减运算符

int main() {
    int i = 6;
    i++;
    printf("%d\n", i);
    ++i;
    printf("%d\n", i);

    int a = 1, b = 1;
    int c = a++;  // 先用后加
    int d = ++b;  // 先加后用
    printf("c = %d, d = %d\n", c, d);
    printf("a = %d, b = %d\n", a, b);

    c = a--;
    d = --b;
    printf("c = %d, d = %d\n", c, d);
    printf("a = %d, b = %d\n", a, b);
    
    // for(int i = 0; i < 10; ++i) {}

    return 0;
}
