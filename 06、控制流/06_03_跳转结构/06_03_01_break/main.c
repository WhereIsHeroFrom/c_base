#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// break
int main() {
    // 1、while 中的 break
    int cnt = 0;
    while (1) {
        cnt++;
        printf("当前次数为：%d\n", cnt);
        if (cnt >= 10) {
            break;
        }
    }
    printf("------------------------\n");

    // 2、for 中的 break
    for (int i = 1;; ++i) {
        printf("当前次数为：%d\n", i);
        if (i >= cnt) {
            break;
        }
    }
    printf("------------------------\n");

    // 3、switch 中的 break
    int a = 1;
    switch (a)
    {
    case 1:
        printf("光天化日学C语言\n");
        // break;
    case 2:
        printf("夜深人静写算法\n");
        break;
    default:
        break;
    }

    return 0;
}