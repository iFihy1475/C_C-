#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    deque<int> dq;

    for (int i = 0; i < 5; ++i)
    {
        dq.push_back((i + 1) * 10);
    }

    // iterator ����
    deque<int>::iterator iter;

    // Default ���
    cout << "[Default] : ";
    for (iter = dq.begin(); iter != dq.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    // �� �� ����
    cout << "[Test1] push_front & end : ";

    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(100);
    dq.push_back(200);

    for (iter = dq.begin(); iter != dq.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl;

    deque<string> strdq;

    strdq.push_front("Nam");
    strdq.push_back("Joo");
    strdq.push_front("Song");
    
    cout << "[Default]" << endl;
    deque<string>::iterator striter;

    for (striter = strdq.begin(); striter != strdq.end(); ++striter)
    {
        cout << *striter << " ";
    }
    cout << endl << endl;
    
    cout << "[Test3] Insert(conlter ++ �ι�, 2, INSERT)" << endl;
    deque<string>::const_iterator conlter = strdq.begin();
    conlter += 2;
    strdq.insert(conlter, 2, "INSERT");
    for (striter = strdq.begin(); striter != strdq.end(); ++striter)
    {
        cout << *striter << " ";
    }
    cout << endl << endl;

    cout << "[Test4] dq.end() �� ���� erase, erase" << endl;
    conlter = strdq.end();
    // end�� �� ������ "����"�� ����Ű�Ƿ� �� �������� ����Ű���� --
    conlter--;

    // �ѹ� ��
    conlter--;

    strdq.erase(conlter);
    for (striter = strdq.begin(); striter != strdq.end(); ++striter)
    {
        cout << *striter << " ";
    }
    cout << endl;

    
    strdq.erase(strdq.begin() + 2);
    for (striter = strdq.begin(); striter != strdq.end(); ++striter)
    {
        cout << *striter << " ";
    }
    cout << endl << endl; 
    

    cout << "[Test5-2] dq[i] : ";
    for (int i = 0; i < strdq.size(); ++i)
    {
        cout << strdq[i] << " ";
    }
    cout << endl;

    return 0;
}