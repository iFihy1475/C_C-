#include <iostream>
#include <set>
#include <string>
using namespace std;

// ���� �����̳�(Associative Container) ���� Ư¡
// 1. ��� ��� �����̳�
// 2. ���� ����Ʈ���� ����
// 3. ��� ����, �����ڰ� 99% ����

int main()
{
    // Set Container
    // Key�� �Ҹ��� ���ҵ��� ���� (���� = Key)
    // Key ���� �ߺ��� ������ �ʽ��ϴ�.
    // Insert ��� �Լ��� ���� ���ԵǸ�, ���� �ڵ� ����
    // Default�� Less(��������)
    
    // Inorder Traversal (���� ��ȸ)�� ���Ͽ� ������� ���
    // iterator�� �ڵ����� Inorder Traversal ������� ������ش�.

    set<int> s1;
    set <pair<int, string>> s2;

    // set �����ڿ� ������
    // �⺻ ���� ���
    set<int> s;

    // pred�� ���� ���ı����� �����.
    set<int> s(pred);

    // s4�� ������ s3
    set<int> s3(s4);


    set<int> se;
    set<int>::iterator iter, start, end;
    int k; // ����

    // �� ù ���� ���Ҹ� ����Ű�� �ݺ��ڸ� ����(����)
    se.begin();
    iter = se.begin();

    // �� ������ ������ ������ ����Ű�� �ݺ��ڸ� ����(����)
    se.end();
    iter = se.end();
    
    // begin() �� end()�� �ݴ�� �۵�
    se.rbegin();
    se.rend();
    for (iter = se.rbegin(); iter != se.rend(); ++iter)
        cout << *iter << endl;

    // ��� ���� ����
    se.clear();
    
    // ���� k�� ������ ��ȯ - set������ ������ 0 Ȥ�� 1 : �ߺ� �Ұ�
    se.count(k);

    // set se�� ����ִ��� Ȯ��
    se.empty();

    // ���� k�� ����
    // ���� �� �ڵ����� ���ĵ� ��ġ�� ����
    // ���� ����/���� ������ ���ϰ�(pair<iterator, bool>)���� ��Ÿ��
    // pair.first�� ������ ���Ҹ� ����Ű�� �ݺ���
    // pair.second�� ����(true), ����(false)�� ��Ÿ����.
    se.insert(k);

    // iter�� ����Ű�� ��ġ���� k�� ���Ե� ��ġ�� Ž���Ͽ� ����
    se.insert(iter, k);

    // iter�� ����Ű�� ���� ����
    // ���� �Ѵ��� ���� �� ���� ���� ���Ҹ� ����Ű�� �ݺ��� ����
    se.erase(iter);

    // [start, end) ���� ��� ���� ����
    se.erase(start, end);

    // ���� k�� ����Ű�� �ݺ��� ��ȯ
    // ���� k�� ���ٸ� se.end()�� ���� �ݺ��� ��ȯ
    se.find(k);

    // s1�� s2�� �ٲ۴�.
    s2.swap(s1);

    // ���� k�� ������ ������ �ݺ���
    se.upper_bound(k);

    // ���� k�� �����ϴ� ������ �ݺ���
    se.lower_bound(k);

    // ���� k�� �����ϴ� ������ ������ ������ �ݺ��� pair ��ü�� ��ȯ
    // upper_bound(k), lower_bound(k) �� ������ ����Լ�
    se.equal_range(k);

    // ���� ���� �����ڸ� ��ȯ
    // set �����̳ʿ����� �� ���� �Լ� ��ȯ���� ����
    se.value_comp();
    se.key_comp();

    // ������(���� ����) ��ȯ
    se.size();

    // �ִ� ������(���� �޸� ũ��) ��ȯ
    se.max_size();    
}