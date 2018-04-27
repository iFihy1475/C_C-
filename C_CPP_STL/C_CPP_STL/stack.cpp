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
    // Stack Container Adapter는 Vector, Deque, List Container에 붙어서 사용 가능
    // 내부적으로 Vector, Deque, List Container의 구조로 구현 되어 있되
    // Stack이라는 포장지로 잘 감싸서, Stack 같이 작동되도록 멤버 함수 지원

    // Default는 Deque Container 기반

    // Stack 생성자와 연산자
    
    template <typename T, typename Container = deque<T>>
    class stack;

    // 기본 생성자 형식
    stack<int> st;
    stack<string> st;

    // 내부 컨테이너 구조를 바꾸는 형식
    //stack<[Data Type], [Container Type]>[변수 이름];
    stack<int, list<int>> st;
    stack<stack<int>, vector<string>> st;

    // 멤버 함수

    stack<int> st1;

    // 비어 있는지 확인
    // bool empty() const;
    st1.empty();

    // 사이즈 반환
    // size_type size() const;
    st1.size();

    // 맨 위에 있는 인자 반환
    // value_type& top();
    // const value_type& top() const;
    st1.top();

    // 데이터(value) 삽입
    // void push(const value_type& val);
    st1.push(999);

    // top이 가리키는 원소 삭제
    // void pop();
    st1.pop();

    return 0;
}