#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // ��� = ���ʽ + �ֺ� �����ʽ;��
    // ѡ��ṹ��if �� switch case
    // if ���
    // if(���ʽ != 0) {
    //      ִ�����;
    // }
    int a = -1;
    if (a > 0) {  
        printf("a��һ������\n");
    }
    if (a < 0) {
        printf("a��һ������\n");
    }
    if (1) {
        printf("������Զ�������е�\n");
    }
    if (0) {
        printf("������Զ�����в���\n");
    }
    if (a) {
        printf("a��һ����0����\n");
    }
    if (!a) {
        printf("a��ֵ����0\n");
    }
    if (a >> 5 & 0b111) { // 32��1 
        printf("��?\n");
    }
    if (a == 0) {
        printf("a��ֵ��0\n");
        printf("a��ֵ��0\n");
    }

    return 0;
}
