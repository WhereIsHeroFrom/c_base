#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
x ^ y            读作  x异或y

左操作数     右操作数      结果
   0            0            0
   0            1            1
   1            0            1
   1            1            0

结论：
1、两个相同的数异或，结果为0
2、任何一个数和0异或，结果一定是它本身
3、满足结合律和交换律
*/

int main() {
    // 1、异或运算的含义
    int a = 0b1010;
    int b = 0b0110;
    //      0b1100;
    printf("%d %d\n", a ^ b, 0b1100);
    
    // 2、标记位取反
    int x = 0b10100;
    int y = 0b11100;
    //       0b1000;
    a = x;
    printf("%d %d\n", a ^ 0b1000, y);
    a = y;
    printf("%d %d\n", a ^ 0b1000, x);

    // 3、变量交换
    x = 1;
    y = 2;
    x = x ^ y;  // x' = x ^ y
    y = x ^ y;  // y' = x' ^ y = x ^ y ^ y = x ^ 0 = x
    x = x ^ y;  // x''= x' ^ y' = (x ^ y) ^ x = x ^ x ^ y = 0 ^ y = y
    printf("%d %d\n", x, y);

    return 0;
}
