#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 99999
// 99999.00
// "99,999"

// 1��������Ķ���
// union �������� { �������Ա�����б�; };

typedef union CurrencyType {
    int i;
    double d;
    char s[50];
}ct;


int main() {
    ct c;
    // c.i = 99999;
    // c.d = 99999.0;
    strcpy(c.s, "99,999");
    //printf("%d\n", c.i);
    //printf("%lf\n", c.d);
    printf("%s\n", c.s);
    return 0;
}
