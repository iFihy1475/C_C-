#include <stdio.h>
#include <limits.h>


#define OVERFLOW 1
int main()
{
    char cNum1 = CHAR_MAX + OVERFLOW;
    short sNum1 = SHRT_MAX + OVERFLOW;
    int iNum1 = INT_MAX + OVERFLOW;
    long long llNum1 = LLONG_MAX + OVERFLOW;

    printf("%d %d %d %lld\n", cNum1, sNum1, iNum1, llNum1);

    unsigned char ucNum1 = UCHAR_MAX + OVERFLOW;
    unsigned short usNum1 = USHRT_MAX + OVERFLOW;
    unsigned int uiNum1 = UINT_MAX + OVERFLOW;
    unsigned long long ullNum1 = ULLONG_MAX + OVERFLOW;

    printf("%u %u %u %llu\n", ucNum1, usNum1, uiNum1, ullNum1);

    return 0;
}