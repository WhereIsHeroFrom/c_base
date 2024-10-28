#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*
        输入一个数 t
        然后是 t 组数据
        每组数据要求输入两个数 a 和 b
        输出 a + b 的和
    */
    int t;
    scanf("%d", &t);
    while (t--) {
        // 循环体语句;
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    /*
        while(t--) {
            // 循环体
        }
    */
    return 0;
}