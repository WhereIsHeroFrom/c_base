#include <stdio.h>
#include <float.h>

/*
-------------------------------------------------------------
| 类型名         字节数          位数          数据范围     |
------------------------------------------------------------|
| float         4字节  0000       32    (FLT_MIN -> FLT_MAX)|
| double        8字节  00000000   64    (DBL_MIN -> DBL_MAX)|
-------------------------------------------------------------
*/

int main() {
    // 1、float 的定义和输出
    float a = 3.1415926F;
    printf("%.7f\n", a);

    // 2、double 的定义和输出
    double b = 3.1415926;
    printf("%.7lf\n", b);

    // 3、小数的省略写法
    double c = .6;
    double d = 6.;
    printf("%lf\n", c);
    printf("%lf\n", d);

    // 4、小数的科学计数法
    double f = 2.332e6;  // 2.332 x 10^6
    printf("%lf\n", f);
    printf("%e\n", f);
    printf("%.3e\n", f);

    // 5、sizeof 在浮点数中的应用
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(1.1F));

    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(1.1));

    // 6、unsigned 在浮点数中的应用(无法和浮点型进行组合)
    // unsigned double a = 1;
    
    // 7、浮点数的范围
    printf("float  的最小正数表示是：%e\n", FLT_MIN);
    printf("float  的最大正数表示是：%e\n", FLT_MAX);
    printf("double 的最小正数表示是：%e\n", DBL_MIN);
    printf("double 的最大正数表示是：%e\n", DBL_MAX);

    return 0;
}