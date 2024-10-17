#include <stdio.h>

// sizeof

int main() {
    short a = 1;
    int b = 2;
    long c = 3L;
    long long d = 4LL;

    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(long long));

    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    return 0;
}
