#include <iostream>
// C Language에서는 time.h
#include <ctime>
using namespace std;

int main()
{
    // 프로그램을 시작하고 나서 프로세서가 소모한 시간 리턴
    clock_t start = clock();

    // CLOCKS_PER_SEC : MACRO clock_t 값을 CLOCKS_PER_SEC로 나누면 소모한 시간이 나온다.

    printf("%0.5f\n", (float)clock() - start / CLOCKS_PER_SEC);
    // 프로그램 시작하고 나서 현재까지의 시간 - 프로그램 수행시간부터 아까 start 변수까지의 시간
    // = start 변수에서부터 지금 printf 라인까지 걸린시간
    return 0;
}