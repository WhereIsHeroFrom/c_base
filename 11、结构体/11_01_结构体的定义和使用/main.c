#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1���ṹ��Ķ���
// struct �ṹ���� { �ṹ���Ա�����б� };
struct Book {
    char name[100];
    double price;
    int value;
}cpp;

int main() {
    // 2���ṹ��Ĵ�����ʹ�ã�
    // 2.1��struct �ṹ���� ������;
    struct Book c;
    strcpy(c.name, "C���Գ������");
    c.price = 999;
    c.value = 10000000;
    printf("%s�ļ۸���%.2lf����ֵ��%d\n", c.name, c.price, c.value );

    // 2.2��struct �ṹ���� ������ = {  ��ʼ���б� };
    struct Book py = { "Python���ŵ���ͨ", 999, 1000000 };
    printf("%s�ļ۸���%.2lf����ֵ��%d\n", py.name, py.price, py.value);

    // 2.3��ֱ�Ӵ���
    strcpy(cpp.name, "C++��������");
    cpp.price = 399;
    cpp.value = 1000000;
    printf("%s�ļ۸���%.2lf����ֵ��%d\n", cpp.name, cpp.price, cpp.value);

    return 0;
}
