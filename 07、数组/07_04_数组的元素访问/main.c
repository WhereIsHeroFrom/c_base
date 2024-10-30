#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[5] = { 9,8,7,6,5 };
    // 索引\小标
    // 1、获取
    // 数组名[索引]
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[3]);
    printf("%d\n", a[4]);
    
    // 2、修改
    // 数组名[索引] = 修改后的值;
    a[3] = -1;
    a[2] = -9;
    a[0] = 6;
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    printf("%d\n", a[3]);
    printf("%d\n", a[4]);

    int b = a[3];

    return 0;
}   