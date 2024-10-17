#include <stdio.h>
#include <float.h>

/*
-------------------------------------------------------------
| ������         �ֽ���          λ��          ���ݷ�Χ     |
------------------------------------------------------------|
| float         4�ֽ�  0000       32    (FLT_MIN -> FLT_MAX)|
| double        8�ֽ�  00000000   64    (DBL_MIN -> DBL_MAX)|
-------------------------------------------------------------
*/

int main() {
    // 1��float �Ķ�������
    float a = 3.1415926F;
    printf("%.7f\n", a);

    // 2��double �Ķ�������
    double b = 3.1415926;
    printf("%.7lf\n", b);

    // 3��С����ʡ��д��
    double c = .6;
    double d = 6.;
    printf("%lf\n", c);
    printf("%lf\n", d);

    // 4��С���Ŀ�ѧ������
    double f = 2.332e6;  // 2.332 x 10^6
    printf("%lf\n", f);
    printf("%e\n", f);
    printf("%.3e\n", f);

    // 5��sizeof �ڸ������е�Ӧ��
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(1.1F));

    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(1.1));

    // 6��unsigned �ڸ������е�Ӧ��(�޷��͸����ͽ������)
    // unsigned double a = 1;
    
    // 7���������ķ�Χ
    printf("float  ����С������ʾ�ǣ�%e\n", FLT_MIN);
    printf("float  �����������ʾ�ǣ�%e\n", FLT_MAX);
    printf("double ����С������ʾ�ǣ�%e\n", DBL_MIN);
    printf("double �����������ʾ�ǣ�%e\n", DBL_MAX);

    return 0;
}