#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
��if��䡿
    if(���ʽ) {
        ִ�����;
    }

��if else��䡿
    if(���ʽ) {
        ִ�����1;
    }else {
        ִ�����2;
    }

��else if��䡿
    if(���ʽ1) {
        ִ�����1;
    }else if(���ʽ2) {
        ִ�����2;
    }else if(���ʽ3) {
        ִ�����3;
    }else {
        ִ�����n;
    }
    ...
*/

int main() {
    int a = -1;
    if (a > 0) {
        printf("a ��һ������\n");
    }
    else if (a < 0) {
        printf("a ��һ������\n");
    }
    else {
        printf("a �� 0 \n");
    }
    return 0;
}
