#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int g_a = 1;
int g_b = 2;
const int c_g_c = 3;
const int c_g_d = 4;

/*
1��ֻҪ�Ǿ�̬�ģ������Ǿֲ�����ȫ�֣������Ǳ������ǳ���������ȫ����
2���Ǿ�̬�ģ�ֻҪ��ȫ�ֵģ������Ǳ������ǳ���������ȫ����
3���ַ������� Ҳ�� ȫ����
*/

int main() {
    printf("ȫ�ֱ���g_a�ĵ�ַ��%p\n", &g_a);
    printf("ȫ�ֱ���g_b�ĵ�ַ��%p\n", &g_b);
    int c = 3;
    int d = 4;
    printf("�ֲ�����  c�ĵ�ַ��%p\n", &c);
    printf("�ֲ�����  d�ĵ�ַ��%p\n", &d);

    static int e = 5;
    static const int f = 6;
    printf("��̬����  e�ĵ�ַ��%p\n", &e);
    printf("��̬����  f�ĵ�ַ��%p\n", &f);

    printf("�ַ��������ĵ�ַ��%p\n", &"Ӣ���������");

    const int g = 7;
    const int h = 8;
    printf("�ֲ�����  g�ĵ�ַ��%p\n", &g);
    printf("�ֲ�����  h�ĵ�ַ��%p\n", &h);

    printf("ȫ�ֳ���c_g_c�ĵ�ַ��%p\n", &c_g_c);
    printf("ȫ�ֳ���c_g_d�ĵ�ַ��%p\n", &c_g_d);


    return 0;
}