#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1��������Ķ���
// union �������� { �������Ա�����б� };
typedef union CurrencyType {
    int i;      // 4
    double d;   // 8
    char s[50]; // 50 51 52 53 54 55 56
}CT;

struct X {
    int i;
    double d;
    char s[50];
};

int main() {
    CT c;
    // 1�������ڴ�ռ�
    printf("%p\n", &c.i);
    printf("%p\n", &c.d);
    printf("%p\n", c.s);

    struct X x;
    printf("%p\n", &x.i);
    printf("%p\n", &x.d);
    printf("%p\n", x.s);

    // 2����������ڴ��С
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(c.i));
    printf("%zu\n", sizeof(c.d));
    printf("%zu\n", sizeof(c.s));

    c.i = 0x09080706;
    printf("%d %d %d %d\n", c.s[0], c.s[1], c.s[2], c.s[3]);

    return 0;
}