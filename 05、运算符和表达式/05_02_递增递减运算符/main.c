#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ++ ���������
// -- �ݼ������

int main() {
    int i = 6;
    i++;
    printf("%d\n", i);
    ++i;
    printf("%d\n", i);

    int a = 1, b = 1;
    int c = a++;  // ���ú��
    int d = ++b;  // �ȼӺ���
    printf("c = %d, d = %d\n", c, d);
    printf("a = %d, b = %d\n", a, b);

    c = a--;
    d = --b;
    printf("c = %d, d = %d\n", c, d);
    printf("a = %d, b = %d\n", a, b);
    
    // for(int i = 0; i < 10; ++i) {}

    return 0;
}
