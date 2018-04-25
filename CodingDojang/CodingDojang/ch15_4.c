#include <stdio.h>

int main()
{
    int iNum1 = 15;
    int iNum2 = 27;
    int iNum3 = 3;

    iNum1 %= iNum3;
    iNum2 %= iNum3;

    printf("%d\n", iNum1);
    printf("%d\n", iNum2);

    return 0;
}