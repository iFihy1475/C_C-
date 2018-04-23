#include <stdio.h>
#include <limits.h>

int main()
{
    char cNum1 = CHAR_MAX;
    short sNum1 = SHRT_MAX;
    int iNum1 = INT_MAX;
    long lNum1 = LONG_MAX;
    long long llNum1 = LLONG_MAX;

    printf("%d %d %d %ld %lld\n", cNum1, sNum1, iNum1, lNum1, llNum1);

    return 0;
}