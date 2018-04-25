#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", 1 % 3);
    printf("%d\n", 2 % 3);
    printf("%d\n", 3 % 3);
    printf("%d\n", 4 % 3);
    printf("%d\n", 5 % 3);
    printf("%d\n", 6 % 3);

    // 나머지 연산은 정수만 가능!
    // 실수에서는 불가능 하다 (컴파일 에러)
    // 0으로 나눈 결과도 구할 수 없다.


    // 실수끼리 나머지 구하기
    // math.h에서 fmod, fmodf, fmodl 함수로 구한다.
    // fmod : double형 실수
    // fmodf : float형 실수
    // fmodl : long double형 실수

    // fmod(나누어지는 수, 나누는 수);
    //  double fmod(double _X, double _Y);
    // fmodf(나누어지는 수, 나누는 수);
    //  float fmodf(float _X, float _Y);
    // fmodl(나누어지는 수, 나누는 수);
    //  long double fmodl(long double _X, long double _Y);
    
    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4));

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6));
    

    int iNum1 = 7;

    iNum1 = iNum1 % 2;
    printf("%d\n", iNum1);

    iNum1 %= 2;
    printf("%d\n", iNum1);


    // 음수의 나머지 연산
    printf("%d\n", 5 % (-3)); // 2
    printf("%d\n", (-5) % 3); // -2
    printf("%d\n", (-5) % (-3)); // -2

    // C99 표준 나머지 연산자 정의 a == (a / b) * b + a % b
    // 요약 : a % b 연산시 a의 부호만 따른다. b 부호 무시
    return 0;
}