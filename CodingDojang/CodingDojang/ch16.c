#include <stdio.h>

int main()
{
    int iNum1 = 11;
    float fNum2 = 4.4f;

    printf("%f\n", iNum1 + fNum2); // 정수는 실수로 변환
    printf("%f\n", iNum1 - fNum2);
    printf("%f\n", iNum1 * fNum2);
    printf("%f\n", iNum1 / fNum2);

    // 암시적 형 변환 (Implicit Type Conversion)
    // 자료형 크기가 큰 쪽, 표현 범위가 넓은 쪽으로 자동 변환
    // = 형 확장(Type Promotion)

    long long llNum1 = 123456789000;
    int iNum2 = 10;

    printf("%d\n", sizeof(llNum1));
    printf("%d\n", sizeof iNum2);

    printf("%lld %lld %lld %lld\n", llNum1 + iNum2, llNum1 - iNum2, llNum1 * iNum2, llNum1 / iNum2);
    

    // 자료형 축소
    float fNum3 = 11.0f;
    float fNum4 = 5.0f;

    int iNum3 = fNum3 / fNum4;
    printf("%d\n", iNum3); // 소수점(0.2) 버림

    // = 형 축소(Type Demotion)
    
    char cNum1 = 28;
    int iNum4 = 1000000002;

    char cNum2 = cNum1 + iNum4;
    // char보다 큰 숫자는 저장할 수 없다.
    // 28 + 2만 남고 앞 자리수는 버려진다.

    // 1000000002 int 4Byte 0011 1011 1001 1010 1100 1010 0000 0010
    //         28 char 1Byte                              0001 1100
    //         30                                         0001 1110

    //  문자                  정수                          실수
    // 1. char      확장->    5. long long int    확장->    8. long double   
    //                        4. long int                   7. double       ↑   ↓
    //                        3. int                        6. float       확장 축소
    //               <-축소   2. short int        <-축소


    printf("%d\n", cNum2);

    return 0;
}