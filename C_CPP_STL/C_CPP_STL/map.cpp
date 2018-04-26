#include <iostream>
#include <map>
#include <string>
using namespace std;

// ���� �����̳� (Associative Container)
// ��� ��� ���� ���� Ʈ�� ����
// Key�� Value�� �̷���� ������, Pair ��ü ���·� ����
// Unique Key : Key�� ���� ���̹Ƿ� �ߺ� �Ұ���
// Ordered : ���ԵǸ鼭 �ڵ� ���� (Default : Less / ��������)
// Allcator-Aware : Map Container�� ������� �ʿ� ���� Allocator ��ü ��� (���� �Ҵ�)

int main()
{
    // �⺻ ���� ��� <key, value>
    map <int, int> m1;
    map <string, int> m2;

    m1.insert(pair<int, int>(10, 20));
    m2.insert(pair<string, int>("BlockDMask", 27));

    // �����ڿ� ������
    // �⺻ ���� ���
    map<int, int> m1;

    map<int, int> m(pred);

    map<int, int> m2(m1);

    // ����(Key, value)�� �߰� �Ǵ� ���� ����
    m[key] = val;

    // map ��� �Լ�
    
    map<int, int>::iterator iter, start, end;

    m.begin();
    m.end();
    m.rbegin();
    m.rend();
    m.clear();
    m.count(k);
    m.empty();
    m.insert(k); // k�� pair ��ü
    m.insert(pair<int, int>(10, 20));
    m.insert(iter, k);
    m.erase(start, end);
    m.find(k);
    m2.swap(m1);
    m.upper_bound(k); // ���� k�� ������ ���� �ݺ���
    m.lower_bound(k); // ���� k�� �����ϴ� ���� �ݺ���
    m.equal_range(k); // ���� k�� �����ϴ� ������ ������ ���� �ݺ��� pair ��ü ��ȯ
    m.value_comp();
    m.key_comp();
    m.size();
    m.max_size();
}