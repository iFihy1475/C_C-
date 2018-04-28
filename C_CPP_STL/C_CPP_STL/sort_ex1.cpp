#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <functional>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string name, int age) :name(name), age(age)
    {

    }

    bool operator<(Student s) const
    {
        if (this->name == s.name)
            return this->age < s.age;
        else
            return this->name < s.name;
    }
};


void Print(int *arr)
{

    cout << "Arr[i] : ";
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Print(vector<int> &v)
{
    cout << "vector : ";
    for (int i = 0; i < 10; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void Print(vector<Student> &v)
{
    cout << "Student Overloading: ";
    for (int i = 0; i < 5; ++i)
    {

        cout << "[" << v[i].name << ", " << v[i].age << "]";
    }
    cout << endl;
}

bool compare(Student a, Student b)
{
    if (a.name == b.name) // �̸��� ������ ���� ���� ��
    {
        return a.age < b.age;
    }
    else // �̸� �ٸ��� �̸� ������
        return a.name < b.name;
}
int main()
{
    // �迭 Sort
    int arr[10] = { 3, 7, 2, 4, 1, 0, 9, 8, 5, 6};
    Print(arr); // ���� �� ���
    sort(arr, arr + 10); // [arr, arr + 10) default(��������) ����
    Print(arr); // ���� �� ���

    srand((int)time(NULL)); // ���� ������ ����
    
    vector <int> v;
    int n = 10;

    // STL(Vector) Sort
    for (int i = 0; i < n; ++i)
    {
        v.push_back(rand() % 10);
    }
    Print(v);
    sort(v.begin(), v.end(), less<int>());
    Print(v);

    // Compare �Լ� ���� Sort
    vector<Student> v1;

    v1.push_back(Student("cc", 10));
    v1.push_back(Student("ba", 24));
    v1.push_back(Student("aa", 11));
    v1.push_back(Student("cc", 8));
    v1.push_back(Student("bb", 21));

    Print(v1);
    sort(v1.begin(), v1.end(), compare);
    Print(v1);

    return 0;
}