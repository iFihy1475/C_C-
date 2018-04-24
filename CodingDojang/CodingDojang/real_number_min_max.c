#include <stdio.h>

#include <float.h>

int main()
{
    float fNum1 = FLT_MIN;
    float fNum2 = FLT_MAX;
    double dNum3 = DBL_MIN;
    double dNum4 = DBL_MAX;
    long double ldNum5 = LDBL_MIN;
    long double ldNum6 = LDBL_MAX;

    printf("%.40f %.2f\n", fNum1, fNum2);

    printf("%e %e\n", dNum3, dNum4);

    printf("%Le %Le\n", ldNum5, ldNum6);

    // 양수 최소값을 100000000.0 으로 나누면 아주 작은 수가 되면서 언더플로우 발생
    fNum1 = fNum1 / 100000000.0f;

    // 양수 최댓값에 1000.0을 곱하면 저장할 수 있는 범위 넘어서면서 오버플로우 발생
    fNum2 = fNum2 * 1000.0f;

    printf("%e %e\n", fNum1, fNum2);
    // 0.000000e+00 inf : 실수의 언더플로우는 0
    // 오버플로우는 무한대가 됨

    return 0;

}