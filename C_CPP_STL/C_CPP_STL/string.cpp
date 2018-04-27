#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 여러 함수 및 초기화 방법

    // 생성
    string str1("송남주");
    string str2;
    str2 = "송남주";
    string str3(str1);

    // 길이
    str1.length();
    str1.size();

    // 한 문자 반환 받기
    // n 번째 있는 문자 반환, 0부터 시작
    str1.at(n);

    // 문자열 찾기
    // 찾는 문자열의 첫 번째 인자 반환
    // 못 찾으면 string :: npos 반환
    str1.find("문자열");

    // 비교

    // 사전 순 앞인지 뒤인지
    str1 < str2;
    str1 > str2;

    // 같으면 true
    str1 == str2;

    // return 값이 0 true
    // return 값이 음수면 str1 < str2
    // return 값이 양수면 str1 > str2
    str1.compare(str2);

    // 연결
    // (+)
    str1 + str2;
    // (+=)
    str1 += str2;
    
    // 대입
    str1 = str2;
   
    return 0;
}