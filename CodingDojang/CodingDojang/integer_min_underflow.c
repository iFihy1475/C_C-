#include <stdio.h>
#include <limits.h>

#define UNDERFLOW 1
int main()
{
    char cNum1 = CHAR_MIN - UNDERFLOW;
    short sNum1 = SHRT_MIN - UNDERFLOW;
    int iNum1 = INT_MIN - UNDERFLOW;
    long long llNum1 = LLONG_MIN - UNDERFLOW;

    printf("%d %d %d %lld\n", cNum1, sNum1, iNum1, llNum1);


    // Caution) UCHAR_MIN, USHRT_MIN .. 존재 X! 0으로 통일
    unsigned char ucNum1 = 0 - UNDERFLOW;
    unsigned short usNum1 = 0 - UNDERFLOW;
    unsigned int uiNum1 = 0 - UNDERFLOW;
    unsigned long long ullNum1 = 0 - UNDERFLOW;

    printf("%u %u %u %llu\n", ucNum1, usNum1, uiNum1, ullNum1);
    
    return 0;
}