#include <iostream>
#include <string>
using namespace std;

// ���ø�(Template) �̶�?
// �Լ��� Ŭ������ ���������� �ٽ� �ۼ����� �ʾƵ�, ���� �ڷ������� ����� �� �ֵ��� ���� ��
// �Լ� ���ø�(Function Template) // Ŭ���� ���ø�(Class Template)


// template ���� ��
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

// template ���
template <typename T>
T sum(T a, T b)
{
    return a + b;
}

// ���� �� �� Ÿ���� �ٸ� ���
template  <class T1, class T2>
void printAll(T1 a, T2 b)
{
    cout << "T1 : " << a << endl;
    cout << "T2 : " << b << endl;
   // cout << "T1 + T2 : " << a + b << endl;
}

int main()
{
    // �Լ� ���ø�(Function Template)
    // �Լ��� ����� ����, ����� ��Ȯ�ϳ� �ڷ����� ��ȣ�ϰ� �д�.
    // C++(��ü����)�� �������� �����ε�(Overloading) Ư���� ���� �Լ� �̸��� ���Ƶ� �ȴ�.

    int a = 1, b = 2;

    double d1 = 2.2;
    double d2 = 3.3;
    
    string s1 = "Song Nam";
    string s2 = "Joo";

    cout << "int �� : " << sum<int>(a, b) << endl;
    cout << "double �� : " << sum<double>(d1, d2) << endl;
    cout << "string �� : " << sum<string>(s1, s2) << endl;

    // ������ 2�� �̻��� ��� �Լ��̸� �ڿ� <> �ȿ� ��Ȯ�ϰ� ������� �ʴ´�.
    // �����Ϸ��� ������ �ڷ����� �Ǵ�

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

