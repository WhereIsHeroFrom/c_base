#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// goto
int main() {
    int i, j;
    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 10; ++j) {
            if (i * i + j * j == 74) {
                goto end;
            }
        }
    }
end:
    printf("i=%d, j=%d\n", i, j);
    return 0;
}