#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <pair<int, string>> v;

    v.push_back(pair<int, string>(3, "Song"));
    v.push_back(pair<int, string>(6, "Nam"));
    v.push_back(pair<int, string>(1, "Joo"));
    v.push_back(pair<int, string>(4, "Okay"));
    v.push_back(pair<int, string>(2, "start"));
    v.push_back(pair<int, string>(2, "end"));

    cout << "=== After sort === " << endl;

    vector < pair<int, string>>::iterator iter;
    for (iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << "[" << iter->first << ", " << iter->second << "]" << endl;
    }

    cout << endl;
    

    sort(v.begin(), v.end());

    for (iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << "[" << iter->first << ", " << iter->second << "]" << endl;
    }

    cout << endl;

    return 0;
}