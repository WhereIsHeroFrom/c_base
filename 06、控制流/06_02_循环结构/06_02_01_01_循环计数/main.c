#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*
        ����һ���� t
        Ȼ���� t ������
        ÿ������Ҫ������������ a �� b
        ��� a + b �ĺ�
    */
    int t;
    scanf("%d", &t);
    while (t--) {
        // ѭ�������;
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    /*
        while(t--) {
            // ѭ����
        }
    */
    return 0;
}