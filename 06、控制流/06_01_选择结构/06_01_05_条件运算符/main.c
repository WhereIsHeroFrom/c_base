#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��Ŀ����������������   ?:
int main() {
    int a = 3, b = 4;
    int x = -1;
    if (a > b) {
        x = a;
    }
    else {
        x = b;
    }
    // �������ʽ ? ���ʽ1 : ���ʽ2
    x = (a > b ? a : b);

    x = (a > b ? b++ : b);
    printf("%d\n", b);

    return 0;
}
