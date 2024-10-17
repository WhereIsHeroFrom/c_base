#include <stdio.h>
/*
---------------------------------------------------------
| 类型名         字节数         位数        数据范围    |
--------------------------------------------------------|
| short        2字节  00         16    (-2^15 -> 2^15-1)|   -32768 -> 32767 
| int          4字节  0000       32    (-2^31 -> 2^31-1)|      21亿
| long         4字节  0000       32    (-2^31 -> 2^31-1)|      21亿
|              8字节  00000000   64    (-2^63 -> 2^63-1)|      19位十进制数
| long long    8字节  00000000   64    (-2^63 -> 2^63-1)|      19位十进制数
---------------------------------------------------------

short <= int <= long <= long long
*/

int main() {
    short a = 32769;
    int b = 2147483648;
    long c = 1L;
    long long d = 1LL;
    printf("%hd\n", a);
    printf("%d\n", b);
    printf("%ld\n", c);
    printf("%lld\n", d);

    return 0;
}