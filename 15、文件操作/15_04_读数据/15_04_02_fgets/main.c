#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// fgets

int main() {
    char name[] = "hhh\\fgets.txt";
    FILE* f = fopen(name, "r");
    if (f == NULL) {
        printf("文件不存在！");
        return -1;
    }
    char buf[1024];
    char* str = NULL;
    //str = fgets(buf, 1024, f);
    //printf("%s", str);
    //str = fgets(buf, 1024, f);
    //printf("%s", str);
    //str = fgets(buf, 1024, f);
    //printf("%s", str);
    //str = fgets(buf, 1024, f);
    //printf("%s", str);
    //str = fgets(buf, 1024, f);
    //printf("%s", str);

    while ( str = fgets(buf, 1024, f) ) {
        printf("%s", str);
    }
    fclose(f);
    return 0;
}