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
    // 2������һ���ṹ������
    // struct �ṹ���� ������[Ԫ�ظ���] = { {}, {}, {}, ... };
    struct Book books[3] = {
        {"C���Գ������", 999, 7111},    // ��0���ṹ��
        {"Python��������", 699, 800},  // ��1���ṹ��
        {"C++��������", 399, 1000000}  // ��2���ṹ��
    };
    strcpy(books[2].name, "C++���ŵ�������");

    for (int i = 0; i < 3; ++i) {
        struct Book tmp = books[i];
        printf("%s�ļ۸���%.2lf����ֵ��%d\n", tmp.name, tmp.price, tmp.value);
    }

    return 0;
}
