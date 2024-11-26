#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Point {
    double x, y;
};

struct Circle {
    struct Point pt;
    double radius;
};

void printCircle(struct Circle c) {
    printf("%p\n", &c);
    printf("(%.0lf, %.0lf) %.0lf\n", c.pt.x, c.pt.y, c.radius);
}

void moveCircle(struct Circle *c, int x, int y) {
    //printf("%p\n", &c);
    c->pt.x += x;
    c->pt.y += y;
}

int main() {
    struct Circle c = { {9,8}, 5 };
    printf("%p\n", &c);
    moveCircle(&c, +1, -2);
    printCircle(c);

    return 0;
}
