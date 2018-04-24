#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    // List Container
    // 시퀀스 컨테이너 (Sequence Container) : 순서를 유지하는 구조
    // 노드 기반 컨테이너, 이중 연결 리스트(Doubly Linked List)

    // 정렬(Sort, Merge), 이어붙이기(Splice) 존재
    // 임의접근 반복자(at(), [] 불가능), 양방향 반복자(++, --)를 이용해서 탐색
    // push_front, push_back(), pop_front(), pop_back() 멤버 함수 이용 list 양 끝에서 삽입, 삭제 가능
    // insert(), erase() 멤버 함수 통해 노드 중간에서도 삽입, 삭제 가능

    // 비어있는 list 컨테이너 lt 생성
    list <int> lt1;
    list <string> lt2;

    // default(0) 값으로 초기화 된 원소 10개 가진 list 생성
    list <int> ilt(10);

    // 2 값으로 초기화 된 원소 3개를 가진 list 생성
    list <int> ilt2(3, 2);

    // list lt1을 lt2로 복사
    list <int> ilt3(ilt);


    // 4로 초기화된 3개 원소 할당
    lt1.assign(3, 4);

    // 맨 앞의 원소를 반환(Return), 참조
    lt1.front();

    // 맨 뒤의 원소를 반환(Return), 참조
    lt1.back();

    // 맨 앞에 가리키는 iterator를 반환
    list<int>::iterator iter;
    iter = lt1.begin();

    // 맨 마지막의 다음 원소를 가리키는 iterator를 반환
    list<int>::iterator iter;
    iter = lt1.end();

    // 뒤에서부터 원소를 순차적으로 접근할 때 사용
    lt1.rbegin();

    // 뒤에서부터 원소를 순차적으로 접근할때 사용
    lt1.rend();

    // 뒤쪽으로 원소 k를 삽입
    lt1.push_back(k);

    // 앞쪽으로 원소 k를 삽입
    lt1.push_front(k);

    // 맨 마지막 원소 제거
    lt1.pop_back();

    // 맨 첫번째 원소 제거
    lt1.pop_front();

    // iter가 가리키는 위치에 원소 k 삽입
    // 삽입한 원소를 가리키는 iterator를 반환한다.
    lt1.insert(iter, k);

    // iterator가 가리키는 원소 삭제
    // 반환값은 삭제한 원소의 다음 원소를 가리키는 iterator를 반환
    lt1.erase(iter);

    // 원소의 개수 반환
    lt1.size();

    // k와 같은 원소를 모두 제거
    lt1.remove(k);

    // 단항 조건자 predicate에 해당하는 원소 모두 제거
    lt1.remove_if(Predicate);

    // 원소들 순차열을 뒤집는다.
    lt1.reverse();

    // 모든 원소를 default(오름차순)으로 정렬
    // Sort 파라미터로 이항조건자가 올 수 있다. 그 기준으로 정렬
    lt1.sort();

    // lt2와 lt1을 바꾼다.
    lt2.swap(lt1);

    // lt2에서 iter2이 가리키는 곳에 lt의 모든 원소를 잘라 붙인다.
    lt2.splice(iter2 lt1);
    // lt2의 iter2가 가리키는 곳에 lt1의 iter1이 가리키는 원소를 잘라 붙인다.
    lt2.splice(iter2, lt1, iter1);
    // lt2의 iter2가 가리키는 곳에 lt1의 [iter1_1 부터 iter1_2까지) 원소를 잘라 붙인다.
    lt2.splice(iter2, lt1, iter1_1, iter1_2);
    // [start, end) start보다는 크거나 같고, end보다 작은 원소

    // 인접한 원소가 같으면 유일하게 만든다. (하나 빼고 삭제)
    lt1.unique();

    // lt1을 lt2 내부로 합병 정렬, default 오름차순
    // 두번째 파라미터로 이항 조건자가 올 수 있다. 그 기준으로 정렬
    lt2.merge(lt1);
}