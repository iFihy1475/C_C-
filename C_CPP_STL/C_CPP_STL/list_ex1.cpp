#include <iostream>
#include <list>
#include <string>
#include <functional>
using namespace std;

// 100�� 200���̸� true
bool predicate(int num)
{
    return num >= 100 && num <= 200;
}

int main()
{
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(108);
    lt.push_back(60);
    lt.push_back(10);
    lt.push_back(100);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);
    lt.push_back(109);
    lt.push_back(30);
    lt.push_back(220);
    lt.push_back(10);

    list<int>::iterator iter;

    cout << "orign) ";
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl << endl;

    // predicate �Լ��� true�̸� remove
    // 100 ~ 200 ���� ���� ����
    lt.remove_if(predicate);

    cout << "test1) ";
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl << endl;

    lt.remove(10);

    cout << "test2) ";
    for (iter = lt.begin(); iter != lt.end(); ++iter)
        cout << *iter << " ";
    cout << endl << endl;


    list <string> slt;

    slt.push_back("b");
    slt.push_back("c");
    slt.push_back("a");
    slt.push_back("q");
    slt.push_back("a");
    slt.push_back("a");
    slt.push_back("a");
    slt.push_back("k");
    slt.push_back("j");
    slt.push_back("p");
    slt.push_back("q");
    slt.push_back("o");
    slt.push_back("e");
    slt.push_back("a");
    slt.push_back("a");

    list<string>::iterator siter;

    cout << "orign) ";
    for (siter = slt.begin(); siter != slt.end(); ++siter)
        cout << *siter << " ";

    cout << endl << endl;
    
    //unique() �پ� �ִ� ���� ����
    cout << "unique) ";
    slt.unique();
    for (siter = slt.begin(); siter != slt.end(); ++siter)
        cout << *siter << " ";
    cout << endl << endl;

    // sort Default ��������, String�� ������ ����
    cout << "sort 1) ";
    slt.sort();
    for (siter = slt.begin(); siter != slt.end(); ++siter)
        cout << *siter << " ";
    cout << endl << endl;
    
    // sort ��������
    cout << "sort 2) ";
    slt.sort(greater<string>());
    for (siter = slt.begin(); siter != slt.end(); ++siter)
        cout << *siter << " ";
    cout << endl << endl;
    return 0;
}