#include <iostream>
#include <list>
#include <string>
#include <functional>

using namespace std;

int main()
{
    list<string> lt1;

    lt1.push_back("a");
    lt1.push_back("b");
    lt1.push_back("c");
    lt1.push_back("d");
    lt1.push_back("e");

    list<string> lt2;
    lt2.push_back("X");
    lt2.push_back("Y");
    lt2.push_back("Z");

    list<string>::iterator iter;

    cout << "[lt1] orign) ";
    for (iter = lt1.begin(); iter != lt1.end(); ++iter)
        cout << *iter << " ";
    cout << endl;

    cout << "[lt2] orign) ";
    for (iter = lt2.begin(); iter != lt2.end(); ++iter)
        cout << *iter << " ";
    cout << endl << endl << endl;

    iter = lt2.begin();
    iter++;

    // it2의 iter 부분 부터 it1을 잘라서 붙인다.
    lt2.splice(iter, lt1);
    cout << "[lt1] splice) ";
    for (iter = lt1.begin(); iter != lt1.end(); ++iter)
        cout << *iter << " ";
    cout << endl << endl;

    cout << "lt1.size() : " << lt1.size() << endl;
    cout << endl << endl;

    cout << "[lt2] splice) ";
    for (iter = lt2.begin(); iter != lt2.end(); ++iter)
        cout << *iter << " ";
    cout << endl << endl;

    cout << "lt2.size() : " << lt2.size() << endl;

    list<int> lt3;

    lt3.push_back(100);
    lt3.push_back(200);
    lt3.push_back(300);
    lt3.push_back(400);
    lt3.push_back(500);

    list<int> lt4;

    lt4.push_back(111);
    lt4.push_back(444);
    lt4.push_back(555);

    list<int>::iterator iter2;

    cout << "[lt3] orign) ";
    for (iter2 = lt3.begin(); iter2 != lt3.end(); ++iter2)
        cout << *iter2 << " ";
    cout << endl;

    cout << "[lt4] orign) ";
    for (iter2 = lt4.begin(); iter2 != lt4.end(); ++iter2)
        cout << *iter2 << " ";

    cout << endl << endl << "test 6) lt4.merge(lt3);" << endl << endl;
    lt4.merge(lt3);

    cout << "[lt3] merge) ";
    for (iter2 = lt3.begin(); iter2 != lt3.end(); ++iter2)
        cout << *iter2 << " ";
    cout << endl;

    cout << "[lt4] merge) ";
    for (iter2 = lt4.begin(); iter2 != lt4.end(); ++iter2)
        cout << *iter2 << " ";

    cout << endl << endl << endl;
    return 0;
}