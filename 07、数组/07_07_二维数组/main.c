#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1、二维数组的定义
    // 数据类型 数组名[行数][列数];
    int a[3][4];
    // 三个一维数组，每个一维数组的长度为 4
    // 第0个数组 [][][][]
    // 第1个数组 [][][][]
    // 第2个数组 [][][][]
    printf("size = %zu\n", sizeof(a));

    // 2、二维数组的初始化
    // 数据类型 数组名[行数][列数] = { {}, {}, {}};
    int b[3][5] = {
        {1,2,3,7},
        {11,5},
        {0}
    };
    int c[][5] = {
        {1,2,3,7},
        {11,5},
        {0}
    };
    printf("size = %zu\n", sizeof(c));
    // 60 = 4 * x * 5
    // 60 / 4 / 5 = 3 = x
    
    // 3、二维数组元素访问
    // 数组名[行索引][列索引]
    printf("b[0][1] = %d\n", b[0][1]);  // 2
    printf("b[1][0] = %d\n", b[1][0]);  // 11
    printf("b[2][2] = %d\n", b[2][2]);  // 0

    b[0][1] = 9;
    printf("b[0][1] = %d\n", b[0][1]);  // 9

    // 4、二维数组的遍历
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            int x = b[i][j];
            printf("%d ", x);
        }
        printf("\n");
    }

    // 5、二维数组的最大值
    int max = -1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            int x = b[i][j];
            if (x > max) {
                max = x;
            }
        }
    }
    printf("max = %d\n", max);

    return 0;
}