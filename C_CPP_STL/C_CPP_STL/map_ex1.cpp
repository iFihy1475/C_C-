#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> m;

    m.insert(pair<int, string>(40, "Song"));
    m.insert(pair<int, string>(35, "Nam"));
    m.insert(pair<int, string>(10, "Joo"));
    m.insert(pair<int, string>(90, "6"));
    m.insert(pair<int, string>(65, "Dul"));
    m.insert(pair<int, string>(20, "Re"));
    m.insert(pair<int, string>(50, "The"));

    map<int, string>::iterator iter;

    // 立辟规过 1
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "[" << iter->first << ", " << iter->second << "]" << " ";
    cout << endl;

    // 立辟规过 2
    for (iter = m.begin(); iter != m.end(); ++iter)
        cout << "[" << (*iter).first << ", " << (*iter).second << "]" << " ";
    cout << endl;


    map<int, int> m1;

    m1[9] = 109;
    m1[3] = 103;
    m1[13] = 113;
    m1[15] = 115;
    m1[1] = 101;
    m1[7] = 107;
    m1[5] = 105;
    m1[11] = 111;

    map<int, int>::iterator iter1;

    for (iter1 = m1.begin(); iter1 != m1.end(); ++iter1)
        cout << "[" << iter1->first << ", " << iter1->second << "]" << " ";
    cout << endl;

    m1[11] = 999;
    m1[1] = 999;
    for (iter1 = m1.begin(); iter1 != m1.end(); ++iter1)
        cout << "[" << iter1->first << ", " << iter1->second << "]" << " ";
    cout << endl;


    // size 0何磐 矫累
    cout << "size : " << m.size() << endl;

    return 0;
}