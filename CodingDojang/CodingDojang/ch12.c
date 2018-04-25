#include <stdio.h>

int main()
{
    int iNum1, iNum2;

    iNum1 = 1 + 2;
    iNum2 = 1 - 2;

    printf("%d\n", iNum1);
    printf("%d\n", iNum2);

    iNum1 = iNum1 + 2;
    iNum2 = iNum2 - 2;

    printf("%d\n", iNum1);
    printf("%d\n", iNum2);

    iNum1 += 2;
    iNum2 -= 2;

    printf("%d\n", iNum1);
    printf("%d\n", iNum2);

    float fNum1, fNum2;
    
    fNum1 = 1.0f + 0.456789f;
    fNum2 = 1.0f - 0.456789f;

    printf("%f\n", fNum1);
    printf("%f\n", fNum2);


    return 0;
}