#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// =
int main() {
    // һ���򵥸�ֵ�����
    int x, y;
    // 1��������ֵ������
    x = 6;
    printf("%d\n", x);
    // 2��������ֵ������
    y = x;
    printf("%d %d\n", x, y);
    // 3����������ֵ������
    x = x + y;   // x = 6 + 6 = 12;
    printf("%d %d\n", x, y);

    // �������ϸ�ֵ�����
    x += y;    // x = x + y;
    printf("%d %d\n", x, y);

    x -= y;    // x = x - y;
    printf("%d %d\n", x, y);

    x *= y;    // x = x * y;
    printf("%d %d\n", x, y);

    x /= y;    // x = x / y;
    printf("%d %d\n", x, y);

    x %= y;    // x = x % y;
    printf("%d %d\n", x, y);

    int alonglonglongname = 3;
    alonglonglongname += 6;
    // alonglonglongname = alonglonglongname + 6;

    return 0;
}
