#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
const int PRO_LAN_C = 0;
const int PRO_LAN_CPP = 1;
const int PRO_LAN_PYTHON = 2;
*/
// 离散值 的 命名常量 集合
/*
enum 枚举名 {
     枚举常量1,
     枚举常量2,
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