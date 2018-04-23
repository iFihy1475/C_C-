#include <stdio.h>

int main()
{
    short sNum1;
    long long llNum1;

    printf("%d\n", sizeof(sNum1) + sizeof(llNum1) + sizeof(int));

    return 0;
}