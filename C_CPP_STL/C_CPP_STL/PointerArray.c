#include <stdio.h>

int main()
{
    // Pointer Array, 포인터배열
    // 포인터 들의 배열
    // 배열 요소가 포인터들로 이루어져 있다. char, int 처럼 단지 char *, int * 일 뿐

    // 배열 요소의 자료형이 char * 인 배열. 그 배열의 요소의 갯수가 3개

    // const 이용
    char * cArr[3];
    int i;

    cArr[0] = "BlockDMask";
    cArr[1] = "C Programming";
    cArr[2] = "point_arr";

    for (i = 0; i < 3; ++i)
    {
        printf("%s\n", cArr[i]);
    }
    return 0;
}