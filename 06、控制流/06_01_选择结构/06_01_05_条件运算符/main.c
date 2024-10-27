#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 三目运算符、条件运算符   ?:
int main() {
    int a = 3, b = 4;
    int x = -1;
    if (a > b) {
        x = a;
    }
    else {
        x = b;
    }
    // 条件表达式 ? 表达式1 : 表达式2
    x = (a > b ? a : b);

    x = (a > b ? b++ : b);
    printf("%d\n", b);

    return 0;
}
