#include <stdio.h>

int main()
{
    int iNum1 = 5;

    if (iNum1 == 10)
    {
        printf("if 조건문\n");
        printf("10입니다.\n");
    }
    else
    {
        printf("else\n");
        printf("10이 아닙니다.\n");
    }


    if (iNum1 == 10)
        printf("10입니다.\n");
    else
        printf("10이 아닙니다.\n");

    if (2) // 0이 아닌 수 : true
        printf("참\n");
    else
        printf("거짓\n");

    if (0) // 0 : false
        printf("참\n");
    else
        printf("거짓\n");
    

    int iNum3 = 10;
    int iNum4 = 20;

    if (iNum3 == 10 && iNum4 == 20)
        printf("참\n");
    else
        printf("거짓\n");

    if (iNum3 == 10)
    {
        if (iNum4 == 20)
            printf("참\n");
        else
            printf("거짓\n");
    }
    else
    {
        printf("거짓\n");
    }
    
    return 0;
}