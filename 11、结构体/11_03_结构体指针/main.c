#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 1���ṹ�嶨��
// struct �ṹ���� { �ṹ���Ա�����б� };
struct Book {
    char name[100];
    double price;
    int value;
};

int main() {
    struct Book b = { "C�������ŵ���ͨ", 999, 1912992 };
    struct Book c = b;
    printf("%s�ļ۸���%.2lf����ֵ��%d\n", c.name, c.price, c.value);
    c.price = 399.99;
    printf("%s�ļ۸���%.2lf����ֵ��%d\n", b.name, b.price, b.value);
    printf("%p\n%p\n", &b, &c);
    // struct �ṹ���� * ������;
    struct Book* pb = &b;
    //(*pb).price = 399.99;
    pb->price = 399.99;
    printf("%s�ļ۸���%.2lf����ֵ��%d\n", b.name, b.price, b.value);


    return 0;
}
