#include <stdio.h>


int main()
{
    int iAge, iMoney = 10000;

    scanf("%d", &iAge);
    
    if (iAge >= 7 && iAge <= 12)
        iMoney -= 450;
    else if (iAge >= 13 && iAge <= 18)
        iMoney -= 720;
    else
        iMoney -= 1200;

    printf("%d\n", iMoney);
    return 0;
}