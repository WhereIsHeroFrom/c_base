#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ��Ŀ����������ֵ  �ҽ����
    // ��Ŀ��~~~~~~a;
    // ��������6���ٽ�
    // ��ֵ
    int a = 1, b = 2, c = 3;
    a += b -= c *= 6;
    // a += (b -= (c *= 6));
    // a += (b -= 18);
    // a += -16;
    // c = 18, b = -16, a = -15 
    printf("%d %d %d\n", a, b, c);

    a = b = c = 18;


    return 0;
}
