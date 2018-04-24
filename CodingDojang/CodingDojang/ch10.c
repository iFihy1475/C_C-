#include <stdio.h>

int main()
{
    printf("%d\n", 10); // 10 : 정수 리터럴
    printf("%f\n", 0.1f); // 0.100000 : 실수 리터럴
    printf("%c\n", 'a'); // a : 문자 리터럴
    printf("%s\n", "Hello, world!"); // Hello, world! : 문자열 리터럴


    printf("%d\n", 19); // 10진 정수 리터럴
    printf("0%o\n", 017); // 8진 정수 리터럴
    printf("0x%X\n", 0x1F); // 16진 정수 리터럴

    
    printf("%f\n", 0.1f); // 0.100000 : 실수 리터럴 소수점 표기
    printf("%f\n", 0.1F); // 0.100000 : 실수 리터럴 소수점 표기
    printf("%f\n", 1.0e-5f); // 0.000010 : 실수 리터럴 지수 표기법
    printf("%f\n", 1.0E-5F); // 0.000010 : 실수 리터럴 지수 표기법

    
    // 상수 선언과 동시에 초기화
    const int con1 = 1;
    const float con2 = 0.1f;
    const char con3 = 'a';


    printf("%d %f %c", con1, con2, con3);

    // 정수 리터럴 크기 명확히 표현, 접미사(Suffix)
    printf("%ld\n", -10L); // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL); // long long 크기의 정수 리터럴

    printf("%u\n", 10U); // unsigned int 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL); // unsigned long 크기의 정수 리터럴

    printf("%lu\n", 10UL); // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL); // unsigned long long 크기의 정수 리터럴

    /*
    접미사         자료형
    (생략)         int
    l, L           long
    u, U           unsigned int
    ul, UL         unsigned long
    ll, LL         long long
    ull, ULL       unsigned long long
    */

    printf("0%lo\n", 017L);
    printf("0%lo\n", 017UL);
    printf("0x%lX\n", 0x7FFFFFFL);
    printf("0x%lX\n", 0xFFFFFFFFUL);

    printf("%f\n", 0.1f);
    printf("%f\n", 0.1F);
    printf("%f\n", 0.1);
    printf("%Lf\n", 0.1l);
    printf("%Lf\n", 0.1L);

    printf("%f\n", 1.0e-5f);
    printf("%f\n", 1.0e-5F);
    printf("%f\n", 1.0e-5);
    printf("%Lf\n", 1.0e-5l);
    printf("%Lf\n", 1.0e-5L);
    
    /*
    접미사         자료형
    f, F           float
    (생략)         double
    l, L           long double
    */
    
    return 0;
}