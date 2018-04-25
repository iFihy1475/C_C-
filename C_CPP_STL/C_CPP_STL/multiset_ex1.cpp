#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(9);
    ms.insert(13);
    ms.insert(5);
    ms.insert(7);
    ms.insert(3);
    ms.insert(1);
    ms.insert(11);
    ms.insert(15);

    multiset<int>::iterator iter;
    for (iter = ms.begin(); iter != ms.end(); ++iter)
        cout << *iter << " ";
    cout << endl;
    cout << "ms.count(11) : " << ms.count(11) << endl << endl;

    ms.insert(3);
    ms.insert(11);
    ms.insert(11);
    for(iter = ms.begin(); iter != ms.end(); ++iter)
        cout << *iter << " ";
    cout << endl;
    cout << "ms.count(11) : " << ms.count(11) << endl;


    multiset<int>::iterator start, end;

    // Key 11�� ó�� ���� �κ� [�󱸰�]
    start = ms.lower_bound(11);
    cout << "lower_bound(11) : " << *start << endl;

    // Key 11�� ������ ���� �κ��� ���� (������)
    end = ms.upper_bound(11);
    cout << "upper_bound(11) : " << *end << endl;

    for (start; start != end; ++start)
        cout << *start << " ";
    cout << endl;


    pair<multiset<int>::iterator, multiset<int>::iterator> equal_pair = ms.equal_range(11);

    for (iter = equal_pair.first; iter != equal_pair.second; ++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;
}