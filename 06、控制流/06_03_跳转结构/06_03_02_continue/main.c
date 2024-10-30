#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// continue
int main() {
    printf("请输入6个整数：");
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        int x;
        scanf("%d", &x);
        if (x < 0) {
            continue;
        }
        sum += x;
    }
    printf("所有正整数的和为：%d\n", sum);
    return 0;
}