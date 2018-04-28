#include <iostream>
#include <algorithm>
using namespace std;


// Sort Algorithm
// algorithm Header File
// sort(start, end) : [start, end) 범위 인자(Element)를 오름차순(Default)로 정렬
// start를 포함하고 end를 포함하지 않는다
// Quick Sort(퀵 정렬) 기반 함수 구현, 평균 시간 복잡도 NlogN
int main()
{
    // 원형
    template <typename T>
    void sort(T start, T end);

    template <typename T>
    // comp : Defalut 오름차순
    void sort(T start, T end Compare comp);
    
    sort1(arr, arr + n);
    sort2(v.begin(), v.end());
    sort3(v.begin(), v.end(), compare); // 사용자 정의 함수
    sort4(v.begin(), v.end(), greater<자료형>()); // 내림차순
    sort5(v.begin(), v.end(), less<자료형>()); // 오름차순
}