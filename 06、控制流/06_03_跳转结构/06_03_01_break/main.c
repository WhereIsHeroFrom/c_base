#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// break
int main() {
    // 1��while �е� break
    int cnt = 0;
    while (1) {
        cnt++;
        printf("��ǰ����Ϊ��%d\n", cnt);
        if (cnt >= 10) {
            break;
        }
    }
    printf("------------------------\n");

    // 2��for �е� break
    for (int i = 1;; ++i) {
        printf("��ǰ����Ϊ��%d\n", i);
        if (i >= cnt) {
            break;
        }
    }
    printf("------------------------\n");

    // 3��switch �е� break
    int a = 1;
    switch (a)
    {
    case 1:
        printf("���컯��ѧC����\n");
        // break;
    case 2:
        printf("ҹ���˾�д�㷨\n");
        break;
    default:
        break;
    }

    return 0;
}