#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
do while ���
    
     1����ʼ�����;
     do {
         2��ѭ�������;
         3�������������;
     }while( 4�������ж���� );
*/

int main() {
    int n;
    scanf("%d", &n);
    // 1����ʼ�����;
    int sum = 0;
    int i = 0;
    do {
        sum = sum + i;   // 2��ѭ�������;
        ++i;             // 3�������������;
    } while (i <= n);    // 4�������ж����
    printf("i=%d, sum=%d\n", i, sum);

    return 0;
}