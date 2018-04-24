#include <stdio.h>

int main()
{
    // float 4Byte, ��ȿ�ڸ��� 7, IEEE 754 �����е� �ε��Ҽ���
    // double 8Byte, ��ȿ�ڸ��� 16, IEEE 754 �����е� �ε��Ҽ���
    // long doulbe 8Byer, ��ȿ�ڸ��� 16, IEEE 754 �����е� �ε��Ҽ���

    /*
    ���� ǥ��� (Exponential Notation) = ������ ǥ���(Scientific Notation)
    �Ǽ�e+���� : �Ǽ� * 10�� �ŵ�����. 2.1e+3 �̶�� 2.1 * 1000 = 2100
    �Ǽ�e-���� : �Ǽ� * (1/10�� �ŵ�����). 2.1e-2 ��� 2.1 * (1/100) = 0.021
    */

    /*
    long double : OS�� Platform�� ���� �ٸ���.
                CPU(�÷���)    ����Ʈ ũ��     ��Ʈ ũ��
    Windows     x86(32Bit)      8               64
                x86-64(64Bit)   8               64
    Linux       x86(32Bit)      12              96
                x86-64(64Bit)   16              128
    OS X        x86(32Bit)      16              128
                x86-64(64Bit)   16              128
    */

    // �ε� �Ҽ���  ��ȣ ����(significand) x ���(base)^����(exponent)
    // ���(=�ؼ�)�� 2�� ����, 2 ��ü�� ���� ���� X

    // �ڷ���      ũ��      ��ȣ      ����      ����
    // float       32Bit     1Bit      8Bit      23Bit
    // double      64Bit     1Bit      11Bit     52Bit
    // ��ȿ�ڸ��� : ���� �κ� + �Ҽ� �κ� �� �ڸ���, 0.123457, ���� �κ� 1 + �Ҽ� �κ� 6 = 7

    float fNum1 = 0.1f; // float ������ ���� f�� ����

    double dNum1 = 3867.215820;

    long double ldNum1 = 9.327513l; // long double�� ���� �ڿ� l�� ����

    // ���� �����ڿ��� long double�� %Lf�� ���
    printf("%f %f %Lf\n", fNum1, dNum1, ldNum1);
    
    float fNum2 = 3.e5f;
    
    double dNum2 = -1.3827e-2;

    long double ldNum2 = 5.21e+9l;

    printf("%f %f %Lf\n", fNum2, dNum2, ldNum2);

    // ���� ǥ������� ���
    printf("%e %e %Le\n", fNum2, dNum2, ldNum2);


    float fNum3 = 0.0f;

    double dNum3 = 0.0;

    long double ldNum3 = 0.0l;

    printf("float : %d, double : %d, long double : %d", sizeof(fNum3), sizeof(dNum3), sizeof(ldNum3));
}