#include <stdio.h>

int main()
{
    // �ǻ� �ڵ�(Pseudo code, ���� �ڵ�, ���� �ڵ�)
    int iNum1 = 10;

    if (iNum1 == 10)
        printf("10�Դϴ�\n");

    if (iNum1 == 10)
    {
        printf("if ���ǹ�\n");
        printf("10�Դϴ�\n");
    }

    float fNum1 = 0.1f;
    char cC1 = 'a';

    if (fNum1 == 0.1f)
        printf("0.1�Դϴ�.\n");
    if (cC1 == 'a')
        printf("a�Դϴ�.\n");
    if (cC1 == 97)
        printf("a�Դϴ�.\n");

    scanf("%d", &iNum1);

    if (iNum1 == 10)
    {
        printf("10�Դϴ�\n");
    }
    if (iNum1 == 20)
    {
        printf("20�Դϴ�\n");
    }

    return 0;
}