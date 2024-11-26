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

struct Circles {
    int size;
    struct Circle c[100];
};

int main() {
    struct Circle c;
    c.pt.x = 9;
    c.pt.y = 8;
    c.radius = 5;

    struct Circles cs = {
        2, 
        {
            { {9, 8}, 5 }, { {2, 1}, 1 }
        }
    };
    for (int i = 0; i < cs.size; ++i) {
        struct Circle tmp = cs.c[i];
        printf("����һ��Բ�ģ�(%.0lf, %.0lf)���뾶Ϊ %.0lf ��Բ\n", tmp.pt.x, tmp.pt.y, tmp.radius);
    }


    return 0;
}
