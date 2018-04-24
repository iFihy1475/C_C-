// 1) STL 란
// 표준 C++ 라이브러리(Standard Template Library)
// 프로그램에 필요한 자료구조와 알고리즘을 Template로 제공하는 라이브러리

// 2) STL의 구성
/*
Container
객체를 저장하는 객체, 자료구조라고도 한다. 클래스 템플릿으로 구현되어 있다.
Sequence Container, Associative Container로 나뉜다.

Sequence Container : array(C++11), vector, list, deque
Associative Container : set, multiset, map, multimap
*/

/*
lterator
포인터와 비슷한 개념으로 컨테이너의 원소를 가리키고
가리키는 원소에 접근하여 다음 원소를 가리키는 기능. 순회
*/

/*
Algorithm
정렬, 삭제, 검색, 연산등을 해결하는 일반화된 방법을 제공하는 함수 템플릿
*/

/*
Function Object
함수처럼 동작하는 객체로 operator() 연산자를 오버로딩 한 객체
컨테이너와 알고리즘 등에 클라이언트 정책을 반영하게 한다.
*/

/*
Container Adaptor
구성요소의 인터페이스를 변경해 새로운 인터페이스를 갖는 구성요소로 변경
Container Adaptor : stack, queue, priority_queue
*/

/*
Allocator
컨테이너의 메모리 할당 정책을 캡슐화한 클래스 객체로 모든 컨테이너는
자신만의 할당기를 가지고 있다.
*/