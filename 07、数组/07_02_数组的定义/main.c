#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����Ķ���
int main() {
    // �������� ������[����];
    int scores[45];
    double db[100];
    char ch[88];
    
    printf("%zu\n", sizeof(scores) / sizeof(int) );
    printf("%zu\n", sizeof(db) / sizeof(double) );
    printf("%zu\n", sizeof(ch) / sizeof(char) );

    return 0;
}