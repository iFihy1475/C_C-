#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // MultiMap Container
    // Associative Container
    // Ordered : Key, Value ���� �� ���ĵǸ鼭 ����(�׻� ����)
    // Map : ���� Key�� �ϳ��� Value�� Mapping �ȴ�.
    // Multiple Equivalent Keys : MultiMap�� �ߺ� Key�� ����Ѵ�.
    // Allocator-Aware : ���ڵ��� ���ö����� Allocator ��ü�� ����� ���� �Ҵ�

    multimap <string, int> mm1;
    multimap <int, int> mm2;

    mm1.insert(pair<string, int>("SongNamJoo", 27));
    mm2.insert(pair<int, int>(2017, 729));


    // �����ڿ� ������

    // �⺻ ���� ���
    // ù ��° ���� key, �� ��° ���� value
    multimap<int, int> mm;
    
    // pred ���ؼ� ��������, ��������(less or greater) ���� ���� ����
    multimap<int, int> mm(pred);

    // mm1�� ������ MultiMap mm2 ����
    multimap<int, int> mm2(mm1);

    // map�� �ٸ��� operator []�� ����ؼ� ����(pair<key, value>) �߰� �Ǵ� ���� �Ұ�


    // ��� �Լ�

    multimap<int, int>::iterator iter, start, end;

    mm.begin();
    mm.end();
    mm.rbegin();
    mm.rend();
    mm.clear();
    mm.count(key);
    mm.empty();
    mm.insert(pair < >); // pair ��ü
    mm.erase(start, end);
    mm.find(key);
    mm2.swap(mm1);
    mm.value_comp();
    mm.key_comp();
    mm.max_size();
    mm.size();
    
    // Key �� �ش�Ǵ� �� ������ ������ "����"�� ����Ű�� �ݺ��� ��ȯ
    // �󱸰� ")"�� ���ȴ�.
    mm.upper_bound(key);
    
    // Key ���� �ش�Ǵ� �� ù��° ���Ҹ� ����Ű�� �ݺ��� ��ȯ
    // ������ "["�� ���ȴ�
    mm.lower_bound(key);

    // Key ���� �ش��ϴ� ������ "����"�� pair ��ü�� ��ȯ
    // pair first�� Key ���� ���� ù��° �ݺ��� ��ȯ(lower_bound)
    // pair second�� Key ���� ���� ������ �ݺ����� ���� ��ȯ(upper_bound)
    // [ first, second )
    mm.equal_range(key);

    multimap<int, int> mm;
    // [2, 30] [6, 60] [6, 61] [6, 62] [8, 80] [9, 100] [10, 100]
    // pair_iter->second�� mm.upper_bound(6)�� ��� [8, 80] �� ����Ű�� �������̹Ƿ� [6, 62] ���� ���
    pair<multimap <int, int>::iterator, multimap<int, int>::iterator> pair_iter = mm.equal_range(6);


    return 0;
}