#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Deque Container
    // vector�� ������ �����ϱ� ���� ������� Container
    // vector�� ���������� �迭���
    // vector�� ���ο� ���Ұ� �߰� �� �� �޸� ���Ҵ� �� ���� ���Ҹ� �����ϴ� ���, ���� �� ���� ����
    // Deque�� �̷��� vector ���� ����, ���� �� �޸� ������ �Ҵ��ϰ� �ϳ� ����ó�� ����� ��� ����
    // Deque�� �޸𸮰� ������ �� ���� ������ ũ���� ���ο� �޸� ������ �Ҵ�, ���� ���� �������� �ʴ´�.
    // ������ ũ�� ������ 3���� �̷���� �ְ�, ������ ���԰� ������ front�� back���� �̷������.
    // Deque �߰��� ���Ҹ� �����ϰų� ������ �� �ִ�.
    
    // ����ִ� Deque dq ����
    deque<int> dq;

    // default(0) ������ �ʱ�ȭ �� 10���� ���Ҹ� ���� dq ����
    deque<int> dq(10);

    // 4�� ������ �ʱ�ȭ �� 10�� ���Ҹ� ���� dq ����
    deque<int> dq(10, 4);

    // dq1�� ������ dq2�� �����Ѵ�.
    deque<int> dq2(dq);

    // capacity ��� �Լ��� ����.
    // ���� �Ѵ� : �ش� �����͸� �����Ѵ�.

    // 3�� ������ 4���� ���� �Ҵ�
    dq.assign(4, 3);

    // idx��° ���� ����
    // ��ȿ������ ���� �ϹǷ� dq[idx] ���� ��������� ������.
    dq.at(idx);

    // idx ��° ���Ҹ� �����Ѵ�.
    // ��ȿ ������ �������� �����Ƿ� ����� �ӵ��� dq.at(idx)���� ������.
    dq[idx];
    
    // ù ��° ���Ҹ� �����Ѵ�.
    dq.front();

    // �� ������ ���Ҹ� �����Ѵ�.
    dq.back();

    // ��� ���Ҹ� �����Ѵ�.
    dq.clear();

    // dq�� ù ��° ���� �տ� ���� 3�� ����
    dq.push_front(3);

    // dq�� ù ��° ���Ҹ� ����
    dq.pop_front();

    // dq�� ������ ���� �ڿ� ���� 5�� ����
    dq.push_back(5);

    // dq�� ������ ���Ҹ� ����
    dq.pop_back();


    deque<int> dqii(2, 5);
    // iterator�� ���
    // ù ��° ���Ҹ� ����Ų��.
    dqii.begin();
    

    // �������� "����"�� ����Ų��.
    deque<int>::iterator dqiter = dqii.end();

    // Reverse Begin�� ����Ų��.
    // �� ������ ���Ҹ� ��ġ ù ��° ����ó�� ����Ų��.
    dqii.rbegin();

    // Reverse End�� ����Ų��.
    // �� ù��° ������ "��"�� ������ ������ "����" ó�� ����Ų��.
    dqii.rend();

    // ũ�⸦ n���� ����
    // ũ�Ⱑ �� Ŀ���� ��� ����ִ� ���Ҹ� default ���� 0���� �ʱ�ȭ�Ѵ�.
    dqii.resize(n);

    // ũ�⸦ n���� �����Ѵ�.
    // ũ�Ⱑ �� Ŀ���� ��� ����ִ� ���Ҹ� 2�� �ʱ�ȭ�Ѵ�.
    dqii.resize(n, 2);
    
    // ������ ������ ����
    dqii.size();

    deque<int> dq1;
    deque<int> dq2;
    // dq1�� d2�� �ٲپ��ش�.
    dq2.swap(dq1);

    // 1��° ��ġ�� 2���� 3 ���� ����
    // ���� �� �� �� ���� ������ �Ǵ��Ͽ� ���� ������ �̷� �����Ѵ�.
    // ���� ���� ������ ���� ���
    dq1.insert(1, 2, 3);
    
    // 3��° ��ġ�� 4�� ���� ����
    // ������ ���� iterator�� ��ȯ
    dq1.insert(3, 4);

    // iter�� ����Ű�� ���� ����
    // ���� �� �� �� ���� ������ ������ �Ǵ��Ͽ� ���� ���� ���Ҹ� ��ܼ� ä���.
    // ������ ���� iterator�� ��ȯ�Ѵ�.
    deque<int>::iterator iter;
    dq1.erase(iter);

    //dq1�� ������� true�� ��ȯ�Ѵ�.
    dq1.empty();
}