#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
const int PRO_LAN_C = 0;
const int PRO_LAN_CPP = 1;
const int PRO_LAN_PYTHON = 2;
*/
// ��ɢֵ �� �������� ����
/*
enum ö���� {
     ö�ٳ���1,
     ö�ٳ���2,
     ...
};
*/
enum PRO_LAN {
    C,
    CPP = 5,
    PYTHON
};


int main() {
    enum PRO_LAN myFavProLan = PYTHON;
    printf("%d\n", myFavProLan);

    return 0;
}