#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // %
    int a = 100;
    int b = 9;
    printf("%d\n", a % b);
    //   100  =  9  * 11   +  1
    //  被除数  除数  商     余数

    printf("%d\n", 100 % 9);   // 1
    printf("%d\n", 100 % -9);  // 1
    printf("%d\n", -100 % 9);  // -1
    printf("%d\n", -100 % -9); // -1
    // -100 =  9 * x + y
    // x = (-11)
    // y = -100 - 9*(-11) = -1


    return 0;
}
