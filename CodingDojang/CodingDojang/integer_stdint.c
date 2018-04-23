#include <stdio.h>
#include <stdint.h>

// 16Bit, 32Bit, 64Bit CPU와 OS의 발전으로 정수 자료형 크기도 그때그때 달라졌다.
// 이러한 혼란에 대응해 C99 표준부터 stdint.h Header File을 추가했다.
int main()
{

    // 최소값, 최대값이 stdint.h에 저장 되어 있으므로 limits.h 헤더 파일을 쓸 필요 없다.

    int8_t iNum1 = -128; // 8Bit 크기의 부호 있는 정수형 변수
    int16_t iNum2 = 32767; // 16Bit 크기의 부호 있는 정수형 변수
    int32_t iNum3 = 2147483647; // 32Bit 크기의 부호 있는 정수형 변수
    int64_t iNum4 = 9223372036854775807;  // 64Bit 크기의 부호 있는 정수형 변수

    // int64_t는 서식 지정자 %lld 사용
    printf("%d %d %d %lld\n", iNum1, iNum2, iNum3, iNum4);

    uint8_t iNum5 = 255; // 8Bit 크기의 부호 없는 정수형 변수
    uint16_t iNum6 = 65535; // 16Bit 크기의 부호 없는 정수형 변수
    uint32_t iNum7 = 4294967295; // 32Bit 크기의 부호 없는 정수형 변수
    uint64_t iNum8 = 18446744073709551615; // 64Bit 크기의 부호 없는 정수형 변수

    printf("%u %u %u %llu\n", iNum5, iNum6, iNum7, iNum8);

    return 0;
}