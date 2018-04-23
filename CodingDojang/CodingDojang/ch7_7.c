#include <stdio.h>

int main()
{
    unsigned char cNum1 = 256;
    unsigned short iNum1 = 65536;
    long long llNum1 = 9223372036854775800;

    printf("%u %u %lld\n", cNum1, iNum1, llNum1);

    return 0;
}