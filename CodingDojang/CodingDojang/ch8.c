#include <stdio.h>

int main()
{
    // float 4Byte, 유효자릿수 7, IEEE 754 단정밀도 부동소수점
    // double 8Byte, 유효자릿수 16, IEEE 754 배정밀도 부동소수점
    // long doulbe 8Byer, 유효자릿수 16, IEEE 754 배정밀도 부동소수점

    /*
    지수 표기법 (Exponential Notation) = 과학적 표기법(Scientific Notation)
    실수e+지수 : 실수 * 10의 거듭제곱. 2.1e+3 이라면 2.1 * 1000 = 2100
    실수e-지수 : 실수 * (1/10의 거듭제곱). 2.1e-2 라면 2.1 * (1/100) = 0.021
    */

    /*
    long double : OS와 Platform에 따라 다르다.
                CPU(플랫폼)    바이트 크기     비트 크기
    Windows     x86(32Bit)      8               64
                x86-64(64Bit)   8               64
    Linux       x86(32Bit)      12              96
                x86-64(64Bit)   16              128
    OS X        x86(32Bit)      16              128
                x86-64(64Bit)   16              128
    */

    // 부동 소수점  부호 가수(significand) x 기수(base)^지수(exponent)
    // 기수(=밑수)는 2로 고정, 2 자체는 따로 저장 X

    // 자료형      크기      부호      지수      가수
    // float       32Bit     1Bit      8Bit      23Bit
    // double      64Bit     1Bit      11Bit     52Bit
    // 유효자리수 : 정수 부분 + 소수 부분 총 자리수, 0.123457, 정수 부분 1 + 소수 부분 6 = 7

    float fNum1 = 0.1f; // float 구분을 위해 f를 붙임

    double dNum1 = 3867.215820;

    long double ldNum1 = 9.327513l; // long double은 숫자 뒤에 l을 붙임

    // 서식 지정자에서 long double은 %Lf로 출력
    printf("%f %f %Lf\n", fNum1, dNum1, ldNum1);
    
    float fNum2 = 3.e5f;
    
    double dNum2 = -1.3827e-2;

    long double ldNum2 = 5.21e+9l;

    printf("%f %f %Lf\n", fNum2, dNum2, ldNum2);

    // 지수 표기법으로 출력
    printf("%e %e %Le\n", fNum2, dNum2, ldNum2);


    float fNum3 = 0.0f;

    double dNum3 = 0.0;

    long double ldNum3 = 0.0l;

    printf("float : %d, double : %d, long double : %d", sizeof(fNum3), sizeof(dNum3), sizeof(ldNum3));
}