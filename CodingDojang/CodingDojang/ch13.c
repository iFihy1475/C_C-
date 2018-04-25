#include <stdio.h>

int main()
{

    int iNum1 = 1;

    iNum1++; // iNum1 = iNum1 + 1   == iNum += 1

    printf("%d\n", iNum1);

    int iNum2 = 2;

    iNum2--;

    printf("%d\n", iNum2); // iNum2 = iNum2 - 1 == iNum2 -= 1


    float fNum1 = 2.1f;
    float fNum2 = 2.1f;

    fNum1++;
    fNum2--;

    printf("%f %f\n", fNum1, fNum2);


    char cC1 = 'b';
    char cC2 = 'b';

    cC1++;
    cC2--;

    printf("%c %c\n", cC1, cC2);

    int iNum11 = 2;
    int iNum12 = 2;
    int iNum13;
    int iNum14;

    iNum13 = iNum11++;
    /*
    iNum13 = iNum11
    iNum11 = iNum11 + 1
    */
    iNum14 = iNum12--;
    /*
    iNum14 = iNum12
    iNum12 = iNum12 - 1
    */

    // 후위(Postfix) 연산자

    printf("%d %d\n", iNum13, iNum14);
    printf("%d %d\n", iNum11, iNum12);


    iNum13 = ++iNum11;
    iNum14 = --iNum12;

    printf("%d %d\n", iNum13, iNum14);
    printf("%d %d\n", iNum11, iNum12);

    // 전위(Prefix) 연산자

    iNum11 = 12;
    iNum12 = 0;
    iNum12 = iNum11++;
    printf("%d", iNum12);

    
    return 0;
}