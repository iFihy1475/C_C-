#include <stdio.h>

int main()
{
    int iNum1;

    printf("������ �Է��ϼ��� : ");
    scanf("%d", &iNum1);
    printf("%d\n", iNum1);

    int iNum2, iNum3;

    printf("������ �� �� �Է��ϼ��� : ");
    scanf("%d %d", &iNum2, &iNum3);

    printf("%d %d\n", iNum2, iNum3);

    float fNum1;

    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%f", &fNum1);

    printf("%f\n", fNum1);


    // double�� printf�� %f�� �ᵵ ������ scanf�� %lf�� ��� �Ѵ�.
    // long double�� %Lf�� �ִ´�.
    double dNum1;
    scanf("%lf", &dNum1);

    long double ldNum1;
    scanf("%Lf", &ldNum1);

    return 0;
}