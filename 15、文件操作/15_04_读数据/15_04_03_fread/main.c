#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fread

int main() {
    FILE* f = fopen("hhh\\pi.txt", "r");
    if (f == NULL) {
        printf("文件不存在！");
        return -1;
    }
    char buf[100];
    //int n = fread(buf, 1, 5, f);
    //for (int i = 0; i < n; ++i) {
    //    printf("%c", buf[i]);
    //}
    //n = fread(buf, 1, 5, f);
    //for (int i = 0; i < n; ++i) {
    //    printf("%c", buf[i]);
    //}

    int n;
    int sum = 0;
    while ( n = fread(buf, 1, 17, f) ) {
        sum += n;
        for (int i = 0; i < n; ++i) {
            printf("%c", buf[i]);
        }
    }
    printf("\n%d\n", sum);

    return 0;
}