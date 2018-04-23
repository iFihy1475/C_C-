#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t i8Num1 = INT8_MIN;
    uint16_t ui16Num1 = UINT16_MAX;
    int32_t i32Num1 = INT32_MAX;
    uint64_t ui64Num1 = UINT64_MAX;

    printf("%d %u %d %llu\n", i8Num1, ui16Num1, i32Num1, ui64Num1);

    return 0;
}