#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    multimap<int, int> mm;

    mm.insert(pair<int, int>(60, 6));
    mm.insert(pair<int, int>(30, 3));
    mm.insert(pair<int, int>(70, 7));
    mm.insert(pair<int, int>(90, 9));
    mm.insert(pair<int, int>(40, 4));
    mm.insert(pair<int, int>(20, 2));
    mm.insert(pair<int, int>(50, 5));
    mm.insert(pair<int, int>(80, 8));
    mm.insert(pair<int, int>(40, 11));

    multimap<int, int>::iterator iter;

    cout << "mm.size() : " << mm.size() << endl;
    cout << "mm.count(40) : " << mm.count(40) << endl;

    for (iter = mm.begin(); iter != mm.end(); ++iter)
        cout << "[" << iter->first << ", " << iter->second << "] ";
    cout << endl << endl;

    mm.insert(pair<int, int>(40, 44));
    mm.insert(pair<int, int>(40, 3));

    cout << "mm.size() : " << mm.size() << endl;
    cout << "mm.count(40) : " << mm.count(40) << endl;

    for (iter = mm.begin(); iter != mm.end(); ++iter)
        cout << "[" << iter->first << ", " << iter->second << "] ";
    cout << endl;

    multimap<int, string> mm1;
    
    mm1.insert(pair<int, string>(60, "C"));
    mm1.insert(pair<int, string>(30, "C++"));
    mm1.insert(pair<int, string>(40, "Linux"));
    mm1.insert(pair<int, string>(70, "JAVA"));
    mm1.insert(pair<int, string>(40, "Ubuntu"));
    mm1.insert(pair<int, string>(90, "Unix"));
    mm1.insert(pair<int, string>(40, "CentOS"));

    multimap<int, string>::iterator iter1;

    for (iter1 = mm1.begin(); iter1 != mm1.end(); ++iter1)
        cout << "[" << iter1->first << ", " << iter1->second << "] ";
    cout << endl << endl;
    
    // 중복 키 값이 존재하는40 의 인자 출력
    for (iter1 = mm1.lower_bound(40); iter1 != mm1.upper_bound(40); ++iter1)
        cout << "[" << iter1->first << ", " << iter1->second << "] ";
    cout << endl;


    // 인자 >= lower_bound
    // 인자 < upper_bound
    // [ lower_iter, upper_iter ) 개폐구간
    multimap<int, string>::iterator lower_iter = mm1.lower_bound(40);
    multimap<int, string>::iterator upper_iter = mm1.upper_bound(40);

    cout << "lower_iter : " << lower_iter->first << ", " << lower_iter->second << endl;
    cout << "upper_iter : " << upper_iter->first << ", " << upper_iter->second << endl;
    
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> pair_iter = mm1.equal_range(40);

    cout << "pair_iter.first : " << (pair_iter.first)->first << ", " << (pair_iter.first)->second << endl;
    cout << "pair_iter.second : " << (pair_iter.second)->first << ", " << (pair_iter.second)->second << endl;
    return 0;
}