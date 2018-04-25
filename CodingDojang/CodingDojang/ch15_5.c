#include <stdio.h>

int main()
{
    int iNum;

    scanf("%d", &iNum);

    printf("%d %d %d %d %d\n", iNum % 10, iNum % 100 / 10, iNum % 1000 / 100, iNum % 10000 / 1000, iNum / 10000);

    return 0;
}