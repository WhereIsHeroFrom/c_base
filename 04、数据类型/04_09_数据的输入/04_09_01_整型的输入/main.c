#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
�����printf
���룺scanf
*/

int main() {
    /*
    int a = 1314;
    printf("������������䣺");
    scanf("%d", &a);
    printf("��������ǣ�%d\n", a);
    */
    int x, y;
    printf("������������ x �� y��");
    scanf("%d%d", &x, &y);
    printf("x+y = %d\n", x+y);

    short b;
    long long c;
    scanf("%hd %lld", &b, &c);
    printf("%hd %lld\n", b, c);

    return 0;
}