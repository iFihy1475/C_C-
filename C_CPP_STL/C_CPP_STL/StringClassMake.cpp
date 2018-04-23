// String Class Make
#include <iostream>
#include <cstring>
using namespace std;

class myString 
{
private:
    char *str;
    int len;
public:
    myString()
    {
        str = NULL;
        len = 0;
    }
    myString(const myString& ms)
    {
        len = ms.len;
        str = new char[len];
        strcpy(str, ms.str);
    }
    myString(const char *str)
    {
        len = (int)strlen(str) + 1;
        this->str = new char[len];
        strcpy(this->str, str);
    }

    // 새로 문자열이 들어갈 객체에 str가 할당되어 있을지 모르므로, 문자열 할당 해제
    // 파라미터로 들어온 문자열을 자기자신에게 복사 후 return
    myString& operator=(const myString& ms)
    {
        if (str != NULL)
            delete[]str;
        len = ms.len;
        str = new char[len];
        strcpy(str, ms.str);
        return *this;
    }
    // 문자열 덧셈 : 문자열을 새로 만들고, 만든 문자열에 문자열을 더해 넣음
    // 새로운 객체를 tmpstr을 이용하여 새로 만들고 반환. tmpstr는 메모리 해제
    myString operator+(const myString& ms)
    {
        char *tmpstr = new char[len + ms.len - 1];
        strcpy(tmpstr, str);
        strcat(tmpstr, ms.str);
        myString tmpString(tmpstr);
        delete[]tmpstr;
        return tmpString;
    }
    // 자기 자신과 문자열 덧셈
    myString& operator+=(const myString& ms)
    {
        if (str == NULL)
            exit(1); // error
        char *tmpstr = new char[len + ms.len - 1]; // tmpstr에 문자열 복사 후 붙임
        strcpy(tmpstr, str);
        strcat(tmpstr, ms.str);

        len = strlen(tmpstr);
        if (str != NULL)
            delete[]str;
        str = new char[len];
        strcpy(str, tmpstr); // 붙인 문자열을 str 에 넣고
        delete[]tmpstr; // tmpstr은 메모리 할당 해제

        return *this;
    }
    // 문자열 비교 strcmp를 이용한다.
    bool operator==(const myString& ms)
    {
        if (strcmp(str, ms.str) == 0)
            return true;
        return false;
    }

    friend ostream& operator<<(ostream& os, const myString& ms);
    friend istream& operator >> (istream& is, myString& ms);

    ~myString()
    {
        if (str != NULL)
            delete []str;
    }
};

ostream& operator<<(ostream& os, const myString& ms)
{
    os << ms.str;
    return os;
}
istream& operator >> (istream& is, myString& ms)
{
    char str[100];
    is >> str;
    ms = myString(str);
    return is;
}

int main()
{
    myString s1 = "Song";
    myString s2 = "Nam";
    myString s3 = "Joo";
    myString s4 = "Ddul";
    myString s5 = "Re";
    myString s6 = "DdulRe";
    myString s7 = "Happy";
    myString tmp = "Hello";

    // test1 : 갹체가 동일 한가
    if (s1 == s2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    // test2 : 덧셈 값이 같은지
    if (s4 + s5 == s6)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    // 덧셈 출력
    tmp = s1 + s2 + s3;
    cout << tmp << endl;

    // 대입
    tmp = s7;
    cout << tmp << endl;

    // 자기 자신과 덧셈
    tmp += s1;
    cout << tmp << endl;

    // 복사 생성자 테스트
    myString tmp1 = s6;
    cout << tmp1 << endl;

    // 입력테스트
    myString tmp2;
    cout << "insert : ";
    cin >> tmp2;
    cout << "result : " << tmp2 << endl;

    return 0;
}