#include <stdio.h>

int main()
{
    // 의사 코드(Pseudo code, 수도 코드, 슈도 코드)
    int iNum1 = 10;

    if (iNum1 == 10)
        printf("10입니다\n");

    if (iNum1 == 10)
    {
        printf("if 조건문\n");
        printf("10입니다\n");
    }

    float fNum1 = 0.1f;
    char cC1 = 'a';

    if (fNum1 == 0.1f)
        printf("0.1입니다.\n");
    if (cC1 == 'a')
        printf("a입니다.\n");
    if (cC1 == 97)
        printf("a입니다.\n");

    scanf("%d", &iNum1);

    if (iNum1 == 10)
    {
        printf("10입니다\n");
    }
    if (iNum1 == 20)
    {
        printf("20입니다\n");
    }

    return 0;
}