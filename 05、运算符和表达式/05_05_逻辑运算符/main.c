#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
逻辑运算符
    &&     逻辑与     a && b      有假即假（有0即0）
    ||     逻辑或     a || b      有真即真（有1即1）
    !      逻辑非       !a        非真即假，非假即真（非1即0，非0即1）
*/

int main() {
    int x = 0;
    -10 < x < 10;
    printf("%d\n", -10 < x < 10);
    x = 11;
    printf("%d\n", -10 < x < 10);

    -10 < x && x < 10;
    printf("%d\n", -10 < x && x < 10);

    // 1、逻辑与
    printf("&& %d %d %d %d\n", (1 && 1), (1 && 0), (0 && 1), (0 && 0));
    // 2、逻辑或
    printf("|| %d %d %d %d\n", (1 || 1), (1 || 0), (0 || 1), (0 || 0));
    // 3、逻辑非
    printf("! %d %d\n", !0, !1);
    // 4、短路原则
    int y = 0;
    printf("%d\n", y > 5 && y < 10);  // 0 && ...
    printf("%d\n", y < 5 || y > 10);  // 1 || ...
    int a = 1, b = 0;
    a < 10 && b++ && ++a;
    printf("%d %d\n", a, b);


    return 0;
}
