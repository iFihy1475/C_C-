#include <stdio.h>

int main()
{
    // 자료형 변수명
    int num1;

    // 변수명 규칙
    // 영문 문자와 숫자 사용
    // 대소문자 구분
    // 문자부터 시작, 숫자로 시작 X
    // _(밑줄 문자)로 시작할 수있다.
    // C 언어 키워(int, short, long, float, void, if, for, while, switch 등) 사용 불가

    // 자료형 종류
    char cChar; // 1Byte
    short sShort; // 2Byte
    int iInt; // 4Byte
    long lLong; // 8Byte..

    float fFloat; // 4Byte
    double dDouble; // 8Byte..

    // void vVoid; // 형태 X


    int iNum1, iNum2, iNum3; // 변수 선언
    iNum1 = 10; // 변수에 값을 할당한다.
    iNum2 = 20;
    iNum3 = 30;

    printf("%d %d %d\n", iNum1, iNum2, iNum3);
    

    int iNum4 = 11, iNum5 = 22, iNum6 = 33;
    
    printf("%d %d %d\n", iNum4, iNum5, iNum6);
    return 0;
}