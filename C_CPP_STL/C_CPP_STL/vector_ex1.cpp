#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(21);
    v.push_back(32);
    v.push_back(53);
    v.push_back(64);
    v.push_back(15);

    // 멤버 형식 size type 이용한 반복
    cout << "[v.at(i)] size_type : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << "[  v[i] ] size_type : ";
    for (vector<int>::size_type i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;

    // int i를 이용한 반복
    cout << "[v.at(i)] int : ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    cout << "[ v[i] ] int : ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;


    // 반복자 iterator를 이용한 반복
    cout << "[*iter] iterator : ";
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;


    vector <string> vStr;

    vStr.push_back("Song");
    vStr.push_back("Nam");
    vStr.push_back("Joo");
    vStr.push_back("Dul");
    vStr.push_back("Re");

    // v.front(), v.back()
    cout << "v.front(), v.back()" << endl;
    cout << "v.front() : " << vStr.front() << endl;
    cout << "v.end() : " << vStr.back() << endl;
    cout << endl;

    
    // v.popback();
    cout << "v.popback()" << endl;

    vector<string>::iterator striter;
    for (striter = vStr.begin(); striter != vStr.end(); striter++)
    {
        cout << *striter << " / ";
    }
    cout << endl;

    vStr.pop_back();

    for (striter = vStr.begin(); striter != vStr.end(); striter++)
    {
        cout << *striter << " / ";
    }
    cout << endl << endl;

    // v.erase(iter)
    cout << "v.erase(iter)" << endl;

    for (striter = vStr.begin(); striter != vStr.end(); ++striter)
    {
        if (*striter == "Nam")
        {
            vStr.erase(striter);
            break;
        }
    }
    for (striter = vStr.begin(); striter != vStr.end(); ++striter)
    {
        cout << *striter << " / ";
    }
    cout << endl << endl;

    // v.size(), v.capacity()
    cout << "v.size(), v.capacity()" << endl;
    cout << "v.size() : " << v.size() << endl;
    cout << "v.capacity() : " << v.capacity() << endl;


    vector <int> vInt;

    cout << "[ v[i], v.size(), v.capacity() ] " << endl;
    for (int i = 0; i <= 64; ++i)
    {
        vInt.push_back(i + 1);
        cout << "[" << vInt[i] << " , " << vInt.size() << " , " << vInt.capacity() << "]" << endl;
    }
    return 0;
}