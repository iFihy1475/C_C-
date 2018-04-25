#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", 1 % 3);
    printf("%d\n", 2 % 3);
    printf("%d\n", 3 % 3);
    printf("%d\n", 4 % 3);
    printf("%d\n", 5 % 3);
    printf("%d\n", 6 % 3);

    // ������ ������ ������ ����!
    // �Ǽ������� �Ұ��� �ϴ� (������ ����)
    // 0���� ���� ����� ���� �� ����.


    // �Ǽ����� ������ ���ϱ�
    // math.h���� fmod, fmodf, fmodl �Լ��� ���Ѵ�.
    // fmod : double�� �Ǽ�
    // fmodf : float�� �Ǽ�
    // fmodl : long double�� �Ǽ�

    // fmod(���������� ��, ������ ��);
    //  double fmod(double _X, double _Y);
    // fmodf(���������� ��, ������ ��);
    //  float fmodf(float _X, float _Y);
    // fmodl(���������� ��, ������ ��);
    //  long double fmodl(long double _X, long double _Y);
    
    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4));

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6));
    

    int iNum1 = 7;

    iNum1 = iNum1 % 2;
    printf("%d\n", iNum1);

    iNum1 %= 2;
    printf("%d\n", iNum1);


    // ������ ������ ����
    printf("%d\n", 5 % (-3)); // 2
    printf("%d\n", (-5) % 3); // -2
    printf("%d\n", (-5) % (-3)); // -2

    // C99 ǥ�� ������ ������ ���� a == (a / b) * b + a % b
    // ��� : a % b ����� a�� ��ȣ�� ������. b ��ȣ ����
    return 0;
}