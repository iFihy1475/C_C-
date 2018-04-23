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

    // ���� ���ڿ��� �� ��ü�� str�� �Ҵ�Ǿ� ������ �𸣹Ƿ�, ���ڿ� �Ҵ� ����
    // �Ķ���ͷ� ���� ���ڿ��� �ڱ��ڽſ��� ���� �� return
    myString& operator=(const myString& ms)
    {
        if (str != NULL)
            delete[]str;
        len = ms.len;
        str = new char[len];
        strcpy(str, ms.str);
        return *this;
    }
    // ���ڿ� ���� : ���ڿ��� ���� �����, ���� ���ڿ��� ���ڿ��� ���� ����
    // ���ο� ��ü�� tmpstr�� �̿��Ͽ� ���� ����� ��ȯ. tmpstr�� �޸� ����
    myString operator+(const myString& ms)
    {
        char *tmpstr = new char[len + ms.len - 1];
        strcpy(tmpstr, str);
        strcat(tmpstr, ms.str);
        myString tmpString(tmpstr);
        delete[]tmpstr;
        return tmpString;
    }
    // �ڱ� �ڽŰ� ���ڿ� ����
    myString& operator+=(const myString& ms)
    {
        if (str == NULL)
            exit(1); // error
        char *tmpstr = new char[len + ms.len - 1]; // tmpstr�� ���ڿ� ���� �� ����
        strcpy(tmpstr, str);
        strcat(tmpstr, ms.str);

        len = strlen(tmpstr);
        if (str != NULL)
            delete[]str;
        str = new char[len];
        strcpy(str, tmpstr); // ���� ���ڿ��� str �� �ְ�
        delete[]tmpstr; // tmpstr�� �޸� �Ҵ� ����

        return *this;
    }
    // ���ڿ� �� strcmp�� �̿��Ѵ�.
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

    // test1 : ��ü�� ���� �Ѱ�
    if (s1 == s2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    // test2 : ���� ���� ������
    if (s4 + s5 == s6)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    // ���� ���
    tmp = s1 + s2 + s3;
    cout << tmp << endl;

    // ����
    tmp = s7;
    cout << tmp << endl;

    // �ڱ� �ڽŰ� ����
    tmp += s1;
    cout << tmp << endl;

    // ���� ������ �׽�Ʈ
    myString tmp1 = s6;
    cout << tmp1 << endl;

    // �Է��׽�Ʈ
    myString tmp2;
    cout << "insert : ";
    cin >> tmp2;
    cout << "result : " << tmp2 << endl;

    return 0;
}