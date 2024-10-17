#include <stdio.h>
// unsigned
int main() {
    unsigned short a = 1;
    printf("%hu\n", a);
    /*
        short:       %hu
        int:         %u
        long:        %lu
        long long :  %llu
    */
    // unsigned short µÄ·¶Î§ [0, 2^16)
    unsigned short b = 65536;
    printf("%hu\n", b);

    unsigned short c = -1;
    printf("%hu\n", c);

    return 0;
}