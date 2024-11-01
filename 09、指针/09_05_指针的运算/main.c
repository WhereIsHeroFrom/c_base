#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 1��ָ��������ļӼ���
    int a;
    int* pa = &a;
    printf("pa   = %p\n", pa);
    printf("pa+1 = %p\n", pa + 1);

    double b;
    double* pb = &b;
    printf("pb   = %p\n", pb);     // 98 99 9A 9B 9C 9D 9E 9F 
    printf("pb+1 = %p\n", pb + 1); // A0

    // T   +1   ->  sizeof(T)
    printf("pb-1 = %p\n", pb-1);

    // 2��ָ���������ϵ�ƫ��
    int arr[] = { 5,2,0,1,3,1,4 };
    int* pc = &arr[0];
    printf("*pc     = %d\n", *pc);
    printf("*(pc+1) = %d\n", *(pc + 1) );
    printf("*(pc+2) = %d\n", *(pc + 2) );
    printf("pc[2]   = %d\n", pc[2]);
    printf("arr[2]  = %d\n", arr[2]);

    // 3��ָ���ָ��֮��ļ���
    int* pd = &arr[4];
    printf("%lld\n", pd - pc);
    // pd = pc + 4
    // pd - pc = 4

    return 0;
}
