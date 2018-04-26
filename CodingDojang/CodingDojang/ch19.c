#include <stdio.h>

int main()
{
    int iNum1 = 20;

    if (iNum1 == 10)
        printf("10입니다.\n");
    else if (iNum1 == 20)
        printf("20입니다.\n");

    
    iNum1 = 30;

    if (iNum1 == 10)
        printf("10입니다.\n");
    else if (iNum1 == 20)
        printf("20입니다.\n");
    else
        printf("10도 20도 아닙니다.\n");

    return 0;
}