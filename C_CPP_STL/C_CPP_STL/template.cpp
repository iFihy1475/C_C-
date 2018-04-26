#include <iostream>
#include <string>
using namespace std;

// 템플릿(Template) 이란?
// 함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러 자료형으로 사용할 수 있도록 만든 툴
// 함수 템플릿(Function Template) // 클래스 템플릿(Class Template)


// template 없을 때
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

// template 사용
template <typename T>
T sum(T a, T b)
{
    return a + b;
}

// 인자 두 개 타입이 다른 경우
template  <class T1, class T2>
void printAll(T1 a, T2 b)
{
    cout << "T1 : " << a << endl;
    cout << "T2 : " << b << endl;
   // cout << "T1 + T2 : " << a + b << endl;
}

int main()
{
    // 함수 템플릿(Function Template)
    // 함수를 만들어 낼때, 기능은 명확하나 자료형은 모호하게 둔다.
    // C++(객체지향)은 다형성의 오버로딩(Overloading) 특성에 의해 함수 이름이 같아도 된다.

    int a = 1, b = 2;

    double d1 = 2.2;
    double d2 = 3.3;
    
    string s1 = "Song Nam";
    string s2 = "Joo";

    cout << "int 합 : " << sum<int>(a, b) << endl;
    cout << "double 합 : " << sum<double>(d1, d2) << endl;
    cout << "string 합 : " << sum<string>(s1, s2) << endl;

    // 변수가 2개 이상일 경우 함수이름 뒤에 <> 안에 명확하게 사용하지 않는다.
    // 컴파일러가 스스로 자료형을 판단

    string s3 = "Okay ";
    string s4 = "Start !";

    int iNum1 = 27;
    int iNum2 = 35;

    double dNum1 = 3.14;
    double dNum2 = 36.5;

    cout << "[string, string]" << endl;
    printAll(s3, s4);

    cout << "[string, int]" << endl;
    printAll(s3, iNum1);

    cout << "[int, int]" << endl;
    printAll(iNum1, iNum2);

    cout << "[int, double]" << endl;
    printAll(iNum1, dNum1);

    cout << "[double, double]" << endl;
    printAll(dNum1, dNum2);

    cout << "[double, string]" << endl;
    printAll(dNum1, s3);


    // template<typename T> void name( ) { } == template<class T> void name() { }

    return 0;
}

