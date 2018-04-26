#include <iostream>
#include <string>
using namespace std;

// 클래스 템플릿 (Class template)
// 클래스 내부의 멤버 변수 타입에 대해서 template로 선언 할 때 사용
// 선언 시 유의 점 : 멤버 함수를 클래스 외부에 선언할 때, 꼭 template 선언을 다시 해주어야 한다.
// 클래스 템플릿은 객체를 생성할 때 타입을 정해준다.

// 멤버 함수가 클래스 내부에서 선언되었을 때
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

// 멤버 함수가 클래스 외부에서 선언 되었을 때
// 외부 선언하는 멤버 함수 및 생성자 마다 template 선언

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
    //객체를 선언할 때 <> 안에 template 타입을 넣는다.
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


    p3.setName("송");
    p4.setName("남");
    p3.setNumber(84);
    p4.setNumber("74");


    p3.printAll();
    p4.printAll();
    cout << endl;

    return 0;
}