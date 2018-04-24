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

    // ��� �ּҰ��� 100000000.0 ���� ������ ���� ���� ���� �Ǹ鼭 ����÷ο� �߻�
    fNum1 = fNum1 / 100000000.0f;

    // ��� �ִ񰪿� 1000.0�� ���ϸ� ������ �� �ִ� ���� �Ѿ�鼭 �����÷ο� �߻�
    fNum2 = fNum2 * 1000.0f;

    printf("%e %e\n", fNum1, fNum2);
    // 0.000000e+00 inf : �Ǽ��� ����÷ο�� 0
    // �����÷ο�� ���Ѵ밡 ��

    return 0;

}