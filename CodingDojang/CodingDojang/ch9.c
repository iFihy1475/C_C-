#include <stdio.h>
// char : 1Byte, -128 ~ 127, 문자 저장
// unsigned char : 1Byte 0 ~ 255, 바이트 단위 데이터 저장

int main()
{
    char c1 = 'a';
    char c2 = 'A';
    // ASCII 65 - A, 97 - a

    unsigned short magic = 'BA';

    printf("%c %d %c %d\n", c1, c1, c2, c2);

    char c3 = 0x61;
    char c4 = 0x62;

    printf("%c %d 0x%x\n", c3, c3, c3);
    printf("%c %d 0x%x\n", c4, c4, c4);

    char c5 = '0';
    char c6 = 0;

    printf("%c %d\n", c5, c5);
    printf("%c %d\n", c6, c6);

    printf("%c %d\n", 97 + 1, 97 + 1);
    printf("%c %d\n", 'a' + 1, 'a' + 1);

    char c7 = 'a';
    char c8 = 'b';
    char lineFeed = '\n';

    printf("%c%c%c%c", c7, lineFeed, c8, lineFeed);

    /* 
    제어 문자의 ASCII 코드
    10진수    16진수    문자  표기법 설명
    10        0x0A      LF    \n     개행, 라인 피드, 새 줄, 줄바꿈
    13        0x0D      CR    \r     복귀, 캐리지 리턴(Carriage Return)
    9         0x09      TAB   \t     수평 탭
    */

    printf("%d 0x%x\n", lineFeed, lineFeed);
    
    return 0;
}