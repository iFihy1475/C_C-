#include <stdio.h>

int main()
{
    int iNum1;
    int iNum2;

    iNum1 = 2 * 3;
    iNum2 = 7 / 2;

    printf("%d %d\n", iNum1, iNum2);

    // iNum1 = 1 / 0; �θ� 0 �Ұ��� ������ ����
    // iNum2 = 0;
    // iNum1 / iNum2; ���� ����

    float fNum1;
    float fNum2;

    fNum1 = 2.73f * 3.81f;
    fNum2 = 7.0f / 2.0f;

    printf("%f %f\n", fNum1, fNum2);

    // �Ǽ� �ڷ��� ����
    // ���� 10.4013
    printf("%f\n", 2.73f * 3.81f);

    // fNum1 = 1.0f / 0.0f ������ ����
    
    fNum2 = 0.0f;
    // ���� ������ �ƴ� inf(���Ѵ�)
    printf("%f\n", fNum1 / fNum2);

    int iNum3 = 2;
    int iNum4 = 7;

    iNum3 = iNum3 * 3;
    iNum4 = iNum4 / 2;
    printf("%d\n", iNum3);
    printf("%d\n", iNum4);

    iNum3 *= 3;
    iNum4 /= 2;

    printf("%d\n", iNum3);
    printf("%d\n", iNum4);

    return 0;    
}