#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
while���

    1����ʼ�����
    while( 2�������ж���� ) {
        3��ѭ�������;
        4�������������;
    }
    ...

*/
int main() {
    int n;
    printf("������һ������n��");
    scanf("%d", &n);
    // 1����ʼ�����
    int sum = 0;
    int i = 1;
    while (i <= n) {    // 2�������ж����
        sum = sum + i;  // 3��ѭ�������;
        ++i;            // 4�������������;
    }
    printf("sum=%d, i=%d\n", sum, i);
    return 0;
}