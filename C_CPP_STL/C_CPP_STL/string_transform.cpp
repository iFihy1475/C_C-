#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    // int atoi (const char * str)
    // ��� ���� <stdlib.h> <cstdlib>
    // C style�� ���ڿ��� �Է¹޾Ƽ� int (����) Ÿ������ ��ȯ�Ͽ� ����

    // std::string c_str()
    // ��ȯ���� char * �̹Ƿ�, �ش��ϴ� string�� ù ��° ���� �ּҰ�(������) ��ȯ

    // char * -> string
    // C style char* ���� C++ Style string���� ��ȯ

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
    // C style�� char *�� int Ÿ������ ��ȯ

    char * cStr3 = "19930630";
    int iNum1 = atoi(cStr3);

    printf("printf : %d\n", iNum1);
    cout << "cout : " << iNum1 << endl;

    // [Test4] string -> char * -> int (�ѹ��� int�� ��ȯ)
    // C++�� String�� int Ÿ������ �� ���� ��ȯ

    string s = "2018";
    int iNum2 = atoi(s.c_str());

    printf("printf : %d\n", iNum2);
    cout << "cout : " << ++iNum2 << endl;

    return 0;
}