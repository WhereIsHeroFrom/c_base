#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
for���

     for(��ʼ�����;  �����ж����; �����������) {
        ѭ�������;
     }
*/

int main() {
    int n;
    printf("������һ������n��");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + i;   // sum += i;
    }
    printf("%d\n", sum);
    return 0;
}