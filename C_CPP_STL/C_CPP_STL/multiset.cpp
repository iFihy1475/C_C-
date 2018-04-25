#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    // Multiset Container
    // Set Container�� ���� Key ���� ����
    // �ߺ��� Key ���� ����
    // ���Ҹ� �����ϸ� �ڵ� ����

    multiset<int> ms;
    multiset<vector<int>> ms;

    // �⺻ ���� ���
    multiset<int> ms1;

    // pred�� ���� ���ı��� ����
    multiset<int> ms2(pred);

    // ms3�� ������ ms4
    multiset<int> ms4(ms3);

    multiset<int>::iterator iter, start, end;
    // �� ù��° ���Ҹ� ����Ű�� �ݺ��� ����(����)
    iter = ms.begin();

    // �� ������ ����(�� ����)�� ����Ű�� ������ �� �κ��� �� �� ���
    iter = ms.end();

    ms.rbegin();
    ms.rend();

    // ��� ���� ����
    ms.clear();

    // ���� k�� ���� ��ȯ
    ms.count(k);

    // multiset ms�� ����ִ��� Ȯ��
    ms.empty();

    // ���� k�� �����Ѵ�.
    // ���Խ� �ڵ����� ���ĵ� ��ġ�� ����
    // Caution!) set�� �޸� �ߺ��� ���� �ϹǷ� insert�� return ���� ������ ���� k�� ��ġ ����Ų��.
    ms.insert(k);

    // iter�� ����Ű�� ��ġ���� k�� ������ ��ġ�� Ž���Ͽ� ����
    ms.insert(iter, k);

    // iter�� ����Ű�� ���� ����
    // ���� �Ѵ��� ���� �� ���� ���� ���Ҹ� ����Ű�� �ݺ��ڸ� ����
    ms.erase(iter);

    // [start, end) ���� ���� ��� ����
    ms.erase(start, end);

    // ���� k�� ����Ű�� �ݺ��� ��ȯ
    // ���� k�� ���ٸ� s.end()�� ���� �ݺ��� ��ȯ
    ms.find(k);

    // ms1�� ms2 �ٲ۴�.
    ms2.swap(ms1);

    // ���� k�� ������ ������ �ݺ���
    ms.upper_bound(k);

    // ���� k�� �����ϴ� ������ �ݺ���
    ms.lower_bound(k);

    // ���� k�� �����ϴ� ������ ������ ������ �ݺ��� pair ��ü�� ��ȯ
    // upper_bound(k), lower_bound(k)�� ������ ����Լ�
    ms.equal_range(k);

    // ���� ���� ���Ǹ� ��ȯ
    ms.value_comp();
    ms.key_comp();

    // ������(������ ����)�� ��ȯ
    ms.size();

    // �ִ� ������(���� �޸� ũ��)�� ��ȯ
    ms.max_size();
}