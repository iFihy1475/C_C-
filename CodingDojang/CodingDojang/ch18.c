#include <stdio.h>

int main()
{
    int iNum1 = 5;

    if (iNum1 == 10)
    {
        printf("if ���ǹ�\n");
        printf("10�Դϴ�.\n");
    }
    else
    {
        printf("else\n");
        printf("10�� �ƴմϴ�.\n");
    }


    if (iNum1 == 10)
        printf("10�Դϴ�.\n");
    else
        printf("10�� �ƴմϴ�.\n");

    if (2) // 0�� �ƴ� �� : true
        printf("��\n");
    else
        printf("����\n");

    if (0) // 0 : false
        printf("��\n");
    else
        printf("����\n");
    

    int iNum3 = 10;
    int iNum4 = 20;

    if (iNum3 == 10 && iNum4 == 20)
        printf("��\n");
    else
        printf("����\n");

    if (iNum3 == 10)
    {
        if (iNum4 == 20)
            printf("��\n");
        else
            printf("����\n");
    }
    else
    {
        printf("����\n");
    }
    
    return 0;
}