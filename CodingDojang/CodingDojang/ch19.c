#include <stdio.h>

int main()
{
    int iNum1 = 20;

    if (iNum1 == 10)
        printf("10�Դϴ�.\n");
    else if (iNum1 == 20)
        printf("20�Դϴ�.\n");

    
    iNum1 = 30;

    if (iNum1 == 10)
        printf("10�Դϴ�.\n");
    else if (iNum1 == 20)
        printf("20�Դϴ�.\n");
    else
        printf("10�� 20�� �ƴմϴ�.\n");

    return 0;
}