#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    1�����ʽ: ������ֻ��Ϊ (�ַ�/����)
    2��case: ֵ ֻ����(�ַ�/����)��������, �����Ǳ���
    3��case: ֵ �������ظ�
    4��break: ��ʾ�жϣ����� switch ��� (ĳЩ����£����Բ�д) case��͸
    5��default: �����������ƥ�䣬ִ�����������
*/

int main() {
    int score;
    printf("������ѧ���ɼ���");
    scanf("%d", &score);

    switch (score / 10) {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5:
        printf("E\n");
        break;
    default:
        printf("F\n");
    }
    return 0;
}
