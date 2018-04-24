#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Deque Container
    // vector의 단점을 보완하기 위해 만들어진 Container
    // vector와 마찬가지로 배열기반
    // vector는 새로운 원소가 추가 될 때 메모리 재할당 후 이전 원소를 복사하는 방식, 삽입 시 성능 저하
    // Deque는 이러한 vector 단점 보완, 여러 개 메모리 블록을 할당하고 하나 블록처럼 여기는 기능 제공
    // Deque는 메모리가 부족할 때 마다 일정한 크기의 새로운 메모리 블록을 할당, 이전 원소 복사하지 않는다.
    // 일정한 크기 블록이 3개로 이루어져 있고, 데이터 삽입과 삭제가 front와 back에서 이루어진다.
    // Deque 중간에 원소를 삽입하거나 삭제할 수 있다.
    
    // 비어있는 Deque dq 생성
    deque<int> dq;

    // default(0) 값으로 초기화 된 10개의 원소를 가진 dq 생성
    deque<int> dq(10);

    // 4의 값으로 초기화 된 10개 원소를 가진 dq 생성
    deque<int> dq(10, 4);

    // dq1을 복사한 dq2를 생성한다.
    deque<int> dq2(dq);

    // capacity 멤버 함수가 없다.
    // 참조 한다 : 해당 데이터를 리턴한다.

    // 3의 값으로 4개의 원소 할당
    dq.assign(4, 3);

    // idx번째 원소 참조
    // 유효범위를 점검 하므로 dq[idx] 보다 상대적으로 느리다.
    dq.at(idx);

    // idx 번째 원소를 참조한다.
    // 유효 범위를 점검하지 않으므로 상대적 속도가 dq.at(idx)보다 빠르다.
    dq[idx];
    
    // 첫 번째 원소를 참조한다.
    dq.front();

    // 맨 마지막 원소를 참조한다.
    dq.back();

    // 모든 원소를 제거한다.
    dq.clear();

    // dq의 첫 번째 원소 앞에 원소 3을 삽입
    dq.push_front(3);

    // dq의 첫 번째 원소를 제거
    dq.pop_front();

    // dq의 마지막 원소 뒤에 원소 5를 삽입
    dq.push_back(5);

    // dq의 마지막 원소를 제거
    dq.pop_back();


    deque<int> dqii(2, 5);
    // iterator와 사용
    // 첫 번째 원소를 가리킨다.
    dqii.begin();
    

    // 마지막의 "다음"을 가리킨다.
    deque<int>::iterator dqiter = dqii.end();

    // Reverse Begin을 가리킨다.
    // 맨 마지막 원소를 마치 첫 번째 원소처럼 가리킨다.
    dqii.rbegin();

    // Reverse End을 가리킨다.
    // 맨 첫번째 원소의 "앞"을 마지막 원소의 "다음" 처럼 가리킨다.
    dqii.rend();

    // 크기를 n으로 변경
    // 크기가 더 커졌을 경우 비어있는 원소를 default 값인 0으로 초기화한다.
    dqii.resize(n);

    // 크기를 n으로 변경한다.
    // 크기가 더 커졌을 경우 비어있는 원소를 2로 초기화한다.
    dqii.resize(n, 2);
    
    // 원소의 개수를 리턴
    dqii.size();

    deque<int> dq1;
    deque<int> dq2;
    // dq1과 d2를 바꾸어준다.
    dq2.swap(dq1);

    // 1번째 위치에 2개의 3 값을 삽입
    // 삽입 시 앞 뒤 원소 개수를 판단하여 적은 쪽으로 미루어서 삽입한다.
    // 앞의 원소 개수가 적을 경우
    dq1.insert(1, 2, 3);
    
    // 3번째 위치에 4의 값을 삽입
    // 삽입한 곳의 iterator를 반환
    dq1.insert(3, 4);

    // iter가 가리키는 원소 제거
    // 제거 한 후 앞 뒤의 원소의 개수를 판단하여 적은 쪽의 원소를 당겨서 채운다.
    // 제거한 곳의 iterator를 반환한다.
    deque<int>::iterator iter;
    dq1.erase(iter);

    //dq1가 비었으면 true를 반환한다.
    dq1.empty();
}