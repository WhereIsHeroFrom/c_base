#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
Ҫ������һ������
������ 0 �� 100 ֮��
����ݹ������ A��B��C��D��E
�⼸������
90 - 100    ���  A
80 - 89     ���  B
70 - 79     ���  C
60 - 69     ���  D
< 60        ���  E
����������� 0 �� 100 ֮��
�� ��� Error
*/
int main() {
    int score;
    printf("��������ĳɼ���");
    scanf("%d", &score);
    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            printf("A\n");
        }
        else if (score >= 80) {
            printf("B\n");
        }
        else if (score >= 70) {
            printf("C\n");
        }
        else if (score >= 60) {
            printf("D\n");
        }
        else {
            printf("E\n");
        }
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}
