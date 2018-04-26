#include <iostream>
#include <string>
using namespace std;

// ���ø� Ư��ȭ(Template Specialization)
// Ư���� �ڷ����� ���ؼ� �ٸ� ó�� �ϰ� ���� ��
// ���� �Լ��� ���ؼ� ������ �ϰ� ���� ������ Ÿ���� �̿��� ������
// T�� ���ְ� �ְ� ���� ������ Ÿ���� �ִ´�.

template <typename T>
T sum(T a, T b)
{
    return a + b;
}

template<>
char* sum<char*>(char* s1, char* s2)
{
    char* str = "[char *]���ڿ��� ���� �� �����ϴ�.";
    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    return str;
}

template<>
const char * sum<const char*>(const char * s1, const char * s2)
{
    char * str = "[const char *]���ڿ��� ���� �� �����ϴ�.";
    cout << "const s1 : " << s1 << endl;
    cout << "const s2 : " << s2 << endl;
    return str;
}

template<>
string sum<string>(string s1, string s2)
{
    string str = "[string]���ڿ��� ���� �� �����ϴ�.";
    cout << "string s1 : " << s1 << endl;
    cout << "string s2 : " << s2 << endl;
    return str;
}

int main()
{
    int a = 10;
    int b = 20;

    double d1 = 1.1;
    double d2 = 2.2;

    char * s1 = "Song ";
    char * s2 = "Nam Joo";
    
    string s3 = "Okay ";
    string s4 = "Start !";

    cout << sum(a, b) << endl;
    cout << sum(d1, d2) << endl;
    cout << sum(s1, s2) << endl;
    cout << sum("Dul", "Re") << endl;
    cout << sum<const char*>(s1, s2) << endl;
    cout << sum(s3, s4) << endl;

    return 0;
}