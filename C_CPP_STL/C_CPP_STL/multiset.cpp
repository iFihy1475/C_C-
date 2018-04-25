#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    // Multiset Container
    // Set Container와 같이 Key 값을 저장
    // 중복된 Key 값을 저장
    // 원소를 삽입하면 자동 정렬

    multiset<int> ms;
    multiset<vector<int>> ms;

    // 기본 선언 방법
    multiset<int> ms1;

    // pred를 통해 정렬기준 세움
    multiset<int> ms2(pred);

    // ms3을 복사한 ms4
    multiset<int> ms4(ms3);

    multiset<int>::iterator iter, start, end;
    // 맨 첫번째 원소를 가리키는 반복자 리턴(참조)
    iter = ms.begin();

    // 맨 마지막 원소(의 다음)를 가리키는 원소의 끝 부분을 알 때 사용
    iter = ms.end();

    ms.rbegin();
    ms.rend();

    // 모든 원소 제거
    ms.clear();

    // 원소 k의 갯수 반환
    ms.count(k);

    // multiset ms가 비어있는지 확인
    ms.empty();

    // 원소 k를 삽입한다.
    // 삽입시 자동으로 정렬된 위치에 삽입
    // Caution!) set과 달리 중복이 가능 하므로 insert의 return 값이 삽입한 원소 k의 위치 가리킨다.
    ms.insert(k);

    // iter가 가리키는 위치부터 k를 삽입할 위치를 탐색하여 삽입
    ms.insert(iter, k);

    // iter가 가리키는 원소 제거
    // 제거 한다음 제거 한 원소 다음 원소를 가리키는 반복자를 리턴
    ms.erase(iter);

    // [start, end) 범위 원소 모두 제거
    ms.erase(start, end);

    // 원소 k를 가리키는 반복자 반환
    // 원소 k가 없다면 s.end()와 같은 반복자 반환
    ms.find(k);

    // ms1과 ms2 바꾼다.
    ms2.swap(ms1);

    // 원소 k가 끝나는 구간의 반복자
    ms.upper_bound(k);

    // 원소 k가 시작하는 구간의 반복자
    ms.lower_bound(k);

    // 원소 k가 시작하는 구간과 끝나는 구간의 반복자 pair 객체를 반환
    // upper_bound(k), lower_bound(k)가 합쳐진 멤버함수
    ms.equal_range(k);

    // 정렬 기준 조건를 반환
    ms.value_comp();
    ms.key_comp();

    // 사이즈(원소의 갯수)를 반환
    ms.size();

    // 최대 사이즈(남은 메모리 크기)를 반환
    ms.max_size();
}