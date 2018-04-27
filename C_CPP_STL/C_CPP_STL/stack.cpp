#include <iostream>
#include <stack>
#include <list>
#include <vector>
using namespace std;

// Container Adapter : Stack, Queue, Priority_Queue

int main()
{
    // Stack Container
    // LIFO(Last in First out)
    // Stack Container Adapter�� Vector, Deque, List Container�� �پ ��� ����
    // ���������� Vector, Deque, List Container�� ������ ���� �Ǿ� �ֵ�
    // Stack�̶�� �������� �� ���μ�, Stack ���� �۵��ǵ��� ��� �Լ� ����

    // Default�� Deque Container ���

    // Stack �����ڿ� ������
    
    template <typename T, typename Container = deque<T>>
    class stack;

    // �⺻ ������ ����
    stack<int> st;
    stack<string> st;

    // ���� �����̳� ������ �ٲٴ� ����
    //stack<[Data Type], [Container Type]>[���� �̸�];
    stack<int, list<int>> st;
    stack<stack<int>, vector<string>> st;

    // ��� �Լ�

    stack<int> st1;

    // ��� �ִ��� Ȯ��
    // bool empty() const;
    st1.empty();

    // ������ ��ȯ
    // size_type size() const;
    st1.size();

    // �� ���� �ִ� ���� ��ȯ
    // value_type& top();
    // const value_type& top() const;
    st1.top();

    // ������(value) ����
    // void push(const value_type& val);
    st1.push(999);

    // top�� ����Ű�� ���� ����
    // void pop();
    st1.pop();

    return 0;
}