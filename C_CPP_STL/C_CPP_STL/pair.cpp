#include <iostream>
#include <utility>
#include <string>
using namespace std;

// Pair Class
// 두 객체를 하나의 객체로 취급 할 수 있게 묶어주는 ㅡㅋㄹ래스
// STL에서 데이터 "쌍"을 표현할 때 사용
// utility Header File
int main()
{
    // Pair 클래스 생김새
    template <class T1, class T2>
    struct pair;

    template <typename T1, typename T2>
    struct pair;
    
    // T1 : First, T2 : Second

    // 멤버 함수 및 간단 사용법
    // 사용할 데이터 타입 1, 2를 넣고 그 타입의 Pair 클래스인 p를 만든다.
    pair<int, double> p;
    

    // p의 첫번째 인자 반환
    p.first;

    // p의 두번째 인자 반환
    p.second;
    
    int iNum1 = 10;
    string sName = "송남주";
    make_pair(iNum1, sName);

    // Sort 알고리즘에 의해 정렬가능
    // 첫 번째 인자 기준, 첫 번째 인자가 같으면 두 번째 인자로 판단
}