#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    printf("%d\n", (a++, ++b, --c) );   // 1, 3, 2

    int x = 1, y = 2, tmp;
    tmp = x;
    x = y;
    y = tmp;
    printf("%d %d\n", x, y);

    tmp = x, x = y, y = tmp;
    printf("%d %d\n", x, y);

    //  int tmp1 = x, x = y, y = tmp1;  不能达到交换变量的效果
    return 0;
}
