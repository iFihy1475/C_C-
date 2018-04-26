#include <iostream>
#include <string>
using namespace std;

// Ŭ���� ���ø� (Class template)
// Ŭ���� ������ ��� ���� Ÿ�Կ� ���ؼ� template�� ���� �� �� ���
// ���� �� ���� �� : ��� �Լ��� Ŭ���� �ܺο� ������ ��, �� template ������ �ٽ� ���־�� �Ѵ�.
// Ŭ���� ���ø��� ��ü�� ������ �� Ÿ���� �����ش�.

// ��� �Լ��� Ŭ���� ���ο��� ����Ǿ��� ��
template<class T>
class Person {
private:
    string name;
    T height;
public:
    Person(string name, T height) :name(name), height(height)
    {

    }

    void printAll()
    {
        cout << "name : " << name << endl;
        cout << "number : " << height << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setNumber(T height)
    {
        this->height = height;
    }
};

// ��� �Լ��� Ŭ���� �ܺο��� ���� �Ǿ��� ��
// �ܺ� �����ϴ� ��� �Լ� �� ������ ���� template ����

template <class T>
class Per {
private:
    string name;
    T height;
public:
    Per(string name, T height);
    void printAll();
    void setName(string name);
    void setNumber(T height);
};

template <class T>
Per<T>::Per(string name, T height) :name(name), height(height)
{

}
template <class T>
void Per<T>::printAll()
{
    cout << "name : " << name << endl;
    cout << "number : " << height << endl;
}
template <class T>
void Per<T>::setName(string name)
{
    this->name = name;
}
template <class T>
void Per<T>::setNumber(T height)
{
    this->height = height;
}

int main()
{
    //��ü�� ������ �� <> �ȿ� template Ÿ���� �ִ´�.
    Person<int> p1("Mr. Dev C++", 173);
    Person<string> p2("Ms. Unix", "155cm");

    p1.printAll();
    p2.printAll();
    cout << endl;

    p1.setNumber(188);
    p2.setNumber("2m 10cm");
    cout << endl;

    p1.printAll();
    p2.printAll();
    cout << endl;


    Per<int> p3("Song", 184);
    Per<string> p4("NamJoo", "184cm");

    p3.printAll();
    p4.printAll();
    cout << endl;


    p3.setName("��");
    p4.setName("��");
    p3.setNumber(84);
    p4.setNumber("74");


    p3.printAll();
    p4.printAll();
    cout << endl;

    return 0;
}