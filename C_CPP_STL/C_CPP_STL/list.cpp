#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    // List Container
    // ������ �����̳� (Sequence Container) : ������ �����ϴ� ����
    // ��� ��� �����̳�, ���� ���� ����Ʈ(Doubly Linked List)

    // ����(Sort, Merge), �̾���̱�(Splice) ����
    // �������� �ݺ���(at(), [] �Ұ���), ����� �ݺ���(++, --)�� �̿��ؼ� Ž��
    // push_front, push_back(), pop_front(), pop_back() ��� �Լ� �̿� list �� ������ ����, ���� ����
    // insert(), erase() ��� �Լ� ���� ��� �߰������� ����, ���� ����

    // ����ִ� list �����̳� lt ����
    list <int> lt1;
    list <string> lt2;

    // default(0) ������ �ʱ�ȭ �� ���� 10�� ���� list ����
    list <int> ilt(10);

    // 2 ������ �ʱ�ȭ �� ���� 3���� ���� list ����
    list <int> ilt2(3, 2);

    // list lt1�� lt2�� ����
    list <int> ilt3(ilt);


    // 4�� �ʱ�ȭ�� 3�� ���� �Ҵ�
    lt1.assign(3, 4);

    // �� ���� ���Ҹ� ��ȯ(Return), ����
    lt1.front();

    // �� ���� ���Ҹ� ��ȯ(Return), ����
    lt1.back();

    // �� �տ� ����Ű�� iterator�� ��ȯ
    list<int>::iterator iter;
    iter = lt1.begin();

    // �� �������� ���� ���Ҹ� ����Ű�� iterator�� ��ȯ
    list<int>::iterator iter;
    iter = lt1.end();

    // �ڿ������� ���Ҹ� ���������� ������ �� ���
    lt1.rbegin();

    // �ڿ������� ���Ҹ� ���������� �����Ҷ� ���
    lt1.rend();

    // �������� ���� k�� ����
    lt1.push_back(k);

    // �������� ���� k�� ����
    lt1.push_front(k);

    // �� ������ ���� ����
    lt1.pop_back();

    // �� ù��° ���� ����
    lt1.pop_front();

    // iter�� ����Ű�� ��ġ�� ���� k ����
    // ������ ���Ҹ� ����Ű�� iterator�� ��ȯ�Ѵ�.
    lt1.insert(iter, k);

    // iterator�� ����Ű�� ���� ����
    // ��ȯ���� ������ ������ ���� ���Ҹ� ����Ű�� iterator�� ��ȯ
    lt1.erase(iter);

    // ������ ���� ��ȯ
    lt1.size();

    // k�� ���� ���Ҹ� ��� ����
    lt1.remove(k);

    // ���� ������ predicate�� �ش��ϴ� ���� ��� ����
    lt1.remove_if(Predicate);

    // ���ҵ� �������� �����´�.
    lt1.reverse();

    // ��� ���Ҹ� default(��������)���� ����
    // Sort �Ķ���ͷ� ���������ڰ� �� �� �ִ�. �� �������� ����
    lt1.sort();

    // lt2�� lt1�� �ٲ۴�.
    lt2.swap(lt1);

    // lt2���� iter2�� ����Ű�� ���� lt�� ��� ���Ҹ� �߶� ���δ�.
    lt2.splice(iter2 lt1);
    // lt2�� iter2�� ����Ű�� ���� lt1�� iter1�� ����Ű�� ���Ҹ� �߶� ���δ�.
    lt2.splice(iter2, lt1, iter1);
    // lt2�� iter2�� ����Ű�� ���� lt1�� [iter1_1 ���� iter1_2����) ���Ҹ� �߶� ���δ�.
    lt2.splice(iter2, lt1, iter1_1, iter1_2);
    // [start, end) start���ٴ� ũ�ų� ����, end���� ���� ����

    // ������ ���Ұ� ������ �����ϰ� �����. (�ϳ� ���� ����)
    lt1.unique();

    // lt1�� lt2 ���η� �պ� ����, default ��������
    // �ι�° �Ķ���ͷ� ���� �����ڰ� �� �� �ִ�. �� �������� ����
    lt2.merge(lt1);
}