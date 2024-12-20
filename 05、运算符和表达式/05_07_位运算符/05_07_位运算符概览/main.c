#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 算术运算符：十进制
// 位运算符：  二进制
// 0 1 2 3 4 5 6 7 8 9 10
// 0 1 10 11 100 101 110 111 1000
/*
十进制      二进制
   0           0
   1           1
   2          10
   3          11
   4         100
   5         101
   6         110
   7         111
   8        1000
   9        1001
  10        1010
  11        1011
  12        1100
  13        1101
  14        1110
*/
int main() {
    /*
       3   ->  0011
      11   ->  1011
      --       ----
      14       1110
    */
    // 1、计算机的二进制表示
    int x = 0b1110;    // binary
    printf("%d\n", x);
    int y = 0b101;
    printf("%d\n", y);

    // 2、二进制转十进制
    0b1110;
    /*
    ...  1*2^3 + 1*2^2 + 1*2^1 + 0*2^0 = 8 + 4 + 2 + 0 = 14
    */

    // 3、十进制转二进制(除留余数法)
    // 14 -> 1110
    /*
    当前数       商       余数
     14          7         0
     7           3         1
     3           1         1
     1           0         1

     -> 逆序取出余数：  1110
    */

    // 布尔位运算符：位于&、位或|、异或^、按位取反~
    // 移位位运算符：左移<< 和 右移>>


    return 0;
}
