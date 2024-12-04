#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[] = { 1,2,3,4,5 };
    // a[5] 未定义行为

    // malloc    memory allocation         申请一块连续的内存空间
    // calloc    contiguous allocation     申请一块连续的内存空间 + 数据初始化
    // realloc   re-allocation             修改已经申请的内存空间的大小
    // free      free                      释放内存空间

    return 0;
}