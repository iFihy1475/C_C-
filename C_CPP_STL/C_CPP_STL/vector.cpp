#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // Vector Container
    // 자동으로 메모리가 할당되는 배열
    // template를 사용 하므로 데이터 타입은 자유롭다.
    // 맨 뒤쪽에 삽입, 삭제 가능
    // 중간에 값을 삽입, 삭제 할 수 있으나 배열 기반이므로 빈번하면 비효율적


    // <vector> Header file 추가
    // vector<[data type]> [변수명]
    
    vector<int> v;

    // vector 생성자와 연산자
    
    // 비어있는 vector v를 생성
    vector<int> v;

    // 기본값(0)으로 초기화 된 5개의 원소를 가지는 vector v를 생성
    vector<int> v(5);

    // 2로 초기화된 5개의 원소를 가지는 vector v를 생성
    vector<int> v(5, 2);

    // v2는 v1 vector를 복사해서 생성
    vector<int> v1(5, 2);
    vector<int> v2(v1);

    // 내부에 인자들이 있다고 했을 때
    vector<int> v1;
    vector<int> v2;
    
    // 연산자 : "==", "!=", "<", ">", "<=", ">="

    vector<int> v;

    // 2의 값으로 5개 원소 할당
    v.assign(5, 2);

    // idx번째 원소를 참조
    // v[idx] 보다 속도는 느리지만, 범위 점검하므로 안전
    v.at(idx);

    // idx 번째 원소를 참조. 범위를 점검하지 않으므로 속도가 v.at(idx)보다 빠르다.
    v[idx];

    // 첫 번째 원소를 참조합니다.
    v.front();

    // 마지막 원소를 참조합니다.
    v.back();
    
    // 모든 원소를 제거합니다.
    // 원소만 제거하고 메모리는 남아있습니다.
    // size만 줄어들고 capacity는 그대로 남아있습니다.
    v.clear();
    
    // 마지막 원소 뒤에 원소 7을 삽입
    v.push_back(7);

    // 마지막 원소 제거
    v.pop_back();

    // lterator 와 사용
    // 첫 번째 원소를 가리킵니다.
    v.begin();     
    // 마지막의 "다음"을 가리킵니다.
    v.end();
    // reverse begin을 가리킨다. (거꾸로 해서 첫 번째 원소를 가리킵니다.)
    v.rbegin();
    // reverse end을 가리킨다. (거꾸로 해서 마지막의 다음을 가리킵니다.)
    v.rend();

    // n개의 원소를 저장할 위치를 예약합니다.(미리 동적할당 해놉니다)
    v.reserve(n);

    // 크기를 n으로 변경
    // 더 커졌을 경우 default 값인 0으로 초기화 한다.
    v.resize(n);

    // 크기를 n으로 변경한다.
    // 더 커졌을 경우 인자 값을 3으로 초기화 한다.
    v.resize(n, 3);

    // 원소의 갯수 리턴
    v.size();

    // 할당된 공간의 크기 리턴
    // 공간 할당 기준은 점점 커지면서 capacity를 할당하게 됩니다.
    v.capacity();
   
    // dev c++ 기준 String 클래스로 Vector를 만들때
    /*
    원소 갯수 1 => capacity 1
    원소 갯수 2 => capacity 2
    원소 갯수 3 => capacity 4
    원소 갯수 4 => capacity 4
    원소 갯수 5 => capacity 8
    원소 갯수 6 => capacity 8
    원소 갯수 7 => capacity 8
    원소 갯수 8 => capacity 8
    */
    // 2^n으로 capacity 메모리 할당한다. push_back 일어날 때마다 동적 할당 시
    // 비효율적이므로 미리 정해둔 만큼 동적 할당을 한 번에 하는 것

    // v1과 v2의 원소와 capacity 바꿔준다.
    // v1의 capacity를 없앨 때 (할당한 메모리를 프로그램이 끝나기 전에 없애고 싶을 떄) 사용하기도 한다.
    v2.swap(v1);
    // v2를 capacity가 0인 임시 객체로 만들어서 스왑을 해준다.
    vector<int>().swap(v1);

    // 2번째 위치에 3개의 4 값을 삽입합니다. (뒤에 원소는 뒤로 밀린다.)
    v.insert(2, 3, 4);

    // 2번째 위치에 3의 값을 삽입한다.
    // 삽입한 곳에 lterator를 반환
    v.insert(2, 3);

    // iterator가 가리키는 원소를 제거
    // size만 줄어들고 capacity(할당된 메모리)는 그대로 남습니다.
    // erase는 파라미터 하나를 받을 때와 두 개를 받을 때 다릅니다.
    v.erase(iter);

    // vector가 비어있으면 리턴 true
    // size가 0이라는 것, capacity와는 상관 없다.
    v.empty();

    // vector 멤버 형식
    /*
    iterator : 반복자 형식
    reverse_iterator : 역 반복자 형식
    value_type : 원소 형식
    size_type : 원소의 개수의 형식
    */
}