#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1���ȶ���һ������
    int arr[] = { 7,6,8,9,5 };

    // 2���ٶ���һ������ָ��
    int(* parr)[5] = &arr;

    // 3����ӡ����
    printf("arr     =  %p\n", arr);
    printf("parr    =  %p\n", parr);

    // 4������
    int* p = arr;
    printf("arr+1         = %p\n", p+1);
    printf("parr+1        = %p\n", parr + 1);

    // 5������ָ�����;
    double d[3][5] = {
        {4, 3, 2, 1, 0},
        {9,8,7,6,5},
        {-1,-2,-3,-4,-5}
    };
    double (*pd)[5] = &d[0];
    printf("pd      =   %p\n", pd);
    printf("*pd     =   %p\n", *pd);
    printf("d[0]    =   %p\n", d[0]);

    for (int i = 0; i < 3; ++i) {
        double(*pdi)[5] = (pd + i);
        double* p = *pdi;
        for (int j = 0; j < 5; ++j) {
            printf("%.0lf ", p[j]);
        }
        printf("\n");
    }

    return 0;
}
