#include <iostream>
#include <set>
#include <string>
using namespace std;

// 연관 컨테이너(Associative Container) 공통 특징
// 1. 노드 기반 컨테이너
// 2. 균형 이진트리로 구현
// 3. 멤버 변수, 생성자가 99% 같다

int main()
{
    // Set Container
    // Key라 불리는 원소들의 집합 (원소 = Key)
    // Key 값은 중복이 허용되지 않습니다.
    // Insert 멤버 함수에 의해 삽입되면, 원소 자동 정렬
    // Default는 Less(오름차순)
    
    // Inorder Traversal (중위 순회)를 통하여 순서대로 출력
    // iterator는 자동으로 Inorder Traversal 순서대로 출력해준다.

    set<int> s1;
    set <pair<int, string>> s2;

    // set 생성자와 연산자
    // 기본 선언 방법
    set<int> s;

    // pred를 통해 정렬기준을 세운다.
    set<int> s(pred);

    // s4을 복사한 s3
    set<int> s3(s4);


    set<int> se;
    set<int>::iterator iter, start, end;
    int k; // 원소

    // 맨 첫 번쨰 원소를 가리키는 반복자를 리턴(참조)
    se.begin();
    iter = se.begin();

    // 맨 마지막 원소의 다음을 가리키는 반복자를 리턴(참조)
    se.end();
    iter = se.end();
    
    // begin() 과 end()를 반대로 작동
    se.rbegin();
    se.rend();
    for (iter = se.rbegin(); iter != se.rend(); ++iter)
        cout << *iter << endl;

    // 모든 원소 제거
    se.clear();
    
    // 원소 k의 갯수를 반환 - set에서는 무조건 0 혹은 1 : 중복 불가
    se.count(k);

    // set se가 비어있는지 확인
    se.empty();

    // 원소 k를 삽입
    // 삽입 시 자동으로 정렬된 위치에 삽입
    // 삽입 성공/실패 유무는 리턴값(pair<iterator, bool>)으로 나타남
    // pair.first는 삽입한 원소를 가리키는 반복자
    // pair.second는 성공(true), 실패(false)를 나타낸다.
    se.insert(k);

    // iter가 가리키는 위치부터 k가 삽입될 위치를 탐색하여 삽입
    se.insert(iter, k);

    // iter가 가리키는 원소 제거
    // 제거 한다음 제거 한 원소 다음 원소를 가리키는 반복자 리턴
    se.erase(iter);

    // [start, end) 범위 모든 원소 제거
    se.erase(start, end);

    // 원소 k를 가리키는 반복자 반환
    // 원소 k가 없다면 se.end()와 같은 반복자 반환
    se.find(k);

    // s1과 s2를 바꾼다.
    s2.swap(s1);

    // 원소 k가 끝나는 구간의 반복자
    se.upper_bound(k);

    // 원소 k가 시작하는 구간의 반복자
    se.lower_bound(k);

    // 원소 k가 시작하는 구간과 끝나는 구간의 반복자 pair 객체를 반환
    // upper_bound(k), lower_bound(k) 가 합쳐진 멤버함수
    se.equal_range(k);

    // 정렬 기준 조건자를 반환
    // set 컨테이너에서는 두 개의 함수 반환형이 같다
    se.value_comp();
    se.key_comp();

    // 사이즈(원소 갯수) 반환
    se.size();

    // 최대 사이즈(남은 메모리 크기) 반환
    se.max_size();    
}