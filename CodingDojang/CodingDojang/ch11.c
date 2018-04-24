#include <stdio.h>

int main()
{
    int iNum1;

    printf("정수를 입력하세요 : ");
    scanf("%d", &iNum1);
    printf("%d\n", iNum1);

    int iNum2, iNum3;

    printf("정수를 두 개 입력하세요 : ");
    scanf("%d %d", &iNum2, &iNum3);

    printf("%d %d\n", iNum2, iNum3);

    float fNum1;

    printf("실수를 입력하세요 : ");
    scanf("%f", &fNum1);

    printf("%f\n", fNum1);


    // double은 printf서 %f를 써도 되지만 scanf는 %lf를 써야 한다.
    // long double은 %Lf를 넣는다.
    double dNum1;
    scanf("%lf", &dNum1);

    long double ldNum1;
    scanf("%Lf", &ldNum1);

    return 0;
}