#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    // int atoi (const char * str)
    // 헤더 파일 <stdlib.h> <cstdlib>
    // C style의 문자열을 입력받아서 int (숫자) 타입으로 변환하여 리턴

    // std::string c_str()
    // 반환형이 char * 이므로, 해당하는 string의 첫 번째 문자 주소값(포인터) 반환

    // char * -> string
    // C style char* 형을 C++ Style string으로 변환

    // [Test1] char * -> string
    char * cStr = "cString";
    string cppStr = cStr;

    cout << "[test1] : char * -> string " << endl;
    cout << "--> cppStr : " << cppStr << endl << endl;

    // [Test2] String -> char *
    string cppStr2 = "CPPstring";
    const char * cStr2 = cppStr2.c_str();

    cout << "[test2] : string -> char *" << endl;
    printf("--> printf > cStr2 : %s\n", cStr2);
    cout << "--> cout > cStr2 : " << cStr2 << endl << endl;

    // [Test3] char * -> int
    // C style의 char *를 int 타입으로 변환

    char * cStr3 = "19930630";
    int iNum1 = atoi(cStr3);

    printf("printf : %d\n", iNum1);
    cout << "cout : " << iNum1 << endl;

    // [Test4] string -> char * -> int (한번에 int로 변환)
    // C++의 String을 int 타입으로 한 번에 변환

    string s = "2018";
    int iNum2 = atoi(s.c_str());

    printf("printf : %d\n", iNum2);
    cout << "cout : " << ++iNum2 << endl;

    return 0;
}