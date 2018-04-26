#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // MultiMap Container
    // Associative Container
    // Ordered : Key, Value 삽입 시 정렬되면서 삽입(항상 정렬)
    // Map : 각각 Key는 하나의 Value에 Mapping 된다.
    // Multiple Equivalent Keys : MultiMap은 중복 Key를 허용한다.
    // Allocator-Aware : 인자들이 들어올때마다 Allocator 객체를 사용해 동적 할당

    multimap <string, int> mm1;
    multimap <int, int> mm2;

    mm1.insert(pair<string, int>("SongNamJoo", 27));
    mm2.insert(pair<int, int>(2017, 729));


    // 생성자와 연산자

    // 기본 선언 방법
    // 첫 번째 인자 key, 두 번째 인자 value
    multimap<int, int> mm;
    
    // pred 통해서 오름차순, 내림차순(less or greater) 정렬 기준 정함
    multimap<int, int> mm(pred);

    // mm1을 복사한 MultiMap mm2 생성
    multimap<int, int> mm2(mm1);

    // map과 다르게 operator []를 사용해서 원소(pair<key, value>) 추가 또는 수정 불가


    // 멤버 함수

    multimap<int, int>::iterator iter, start, end;

    mm.begin();
    mm.end();
    mm.rbegin();
    mm.rend();
    mm.clear();
    mm.count(key);
    mm.empty();
    mm.insert(pair < >); // pair 객체
    mm.erase(start, end);
    mm.find(key);
    mm2.swap(mm1);
    mm.value_comp();
    mm.key_comp();
    mm.max_size();
    mm.size();
    
    // Key 값 해당되는 맨 마지막 원소의 "다음"을 가리키는 반복자 반환
    // 폐구간 ")"로 사용된다.
    mm.upper_bound(key);
    
    // Key 값에 해당되는 맨 첫번째 원소를 가리키는 반복자 반환
    // 개구간 "["로 사용된다
    mm.lower_bound(key);

    // Key 값에 해당하는 원소의 "범위"를 pair 객체로 반환
    // pair first는 Key 값의 원소 첫번째 반복자 반환(lower_bound)
    // pair second는 Key 값의 원소 마지막 반복자의 다음 반환(upper_bound)
    // [ first, second )
    mm.equal_range(key);

    multimap<int, int> mm;
    // [2, 30] [6, 60] [6, 61] [6, 62] [8, 80] [9, 100] [10, 100]
    // pair_iter->second와 mm.upper_bound(6)은 모두 [8, 80] 을 가리키나 개구간이므로 [6, 62] 까지 출력
    pair<multimap <int, int>::iterator, multimap<int, int>::iterator> pair_iter = mm.equal_range(6);


    return 0;
}