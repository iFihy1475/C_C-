#include <iostream>
#include <map>
#include <string>
using namespace std;

// 연관 컨테이너 (Associative Container)
// 노드 기반 균형 이진 트리 구조
// Key와 Value로 이루어져 있으며, Pair 객체 형태로 저장
// Unique Key : Key는 고유 값이므로 중복 불가능
// Ordered : 삽입되면서 자동 정렬 (Default : Less / 오름차순)
// Allcator-Aware : Map Container는 저장공간 필요 따라 Allocator 객체 사용 (동적 할당)

int main()
{
    // 기본 생성 방법 <key, value>
    map <int, int> m1;
    map <string, int> m2;

    m1.insert(pair<int, int>(10, 20));
    m2.insert(pair<string, int>("BlockDMask", 27));

    // 생성자와 연산자
    // 기본 선언 방법
    map<int, int> m1;

    map<int, int> m(pred);

    map<int, int> m2(m1);

    // 원소(Key, value)를 추가 또는 수정 가능
    m[key] = val;

    // map 멤버 함수
    
    map<int, int>::iterator iter, start, end;

    m.begin();
    m.end();
    m.rbegin();
    m.rend();
    m.clear();
    m.count(k);
    m.empty();
    m.insert(k); // k는 pair 객체
    m.insert(pair<int, int>(10, 20));
    m.insert(iter, k);
    m.erase(start, end);
    m.find(k);
    m2.swap(m1);
    m.upper_bound(k); // 원소 k가 끝나는 구간 반복자
    m.lower_bound(k); // 원소 k가 시작하는 구간 반복자
    m.equal_range(k); // 원소 k가 시작하는 구간과 끝나는 구간 반복자 pair 객체 반환
    m.value_comp();
    m.key_comp();
    m.size();
    m.max_size();
}