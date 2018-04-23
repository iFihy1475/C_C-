// Reference : blockdmask.tistory.com

// 동적 할당 : 프로그램 실행 도중 메모리 공간 할당. 사용 후 공간 해제

// Dynamic Programming Header File
#include <stdlib.h>
#include <iostream>

// 할당 함수 : malloc
// 메모리 할당 및 초기화 : calloc
// 메모리 추가 할당 : realloc
// 메모리 해제 함수 : free

int main()
{
	// 할당받을 메모리 크기를 인자로 받음
    // 할당된 공간의 값들을 바꾸지 않는다.
	int iN = 10;
	void *malloc(size_t size);
	int *arr = (int *)malloc(sizeof(int) * iN); 

    // 첫 번째 인자 배열요소 갯수, 두 번째 인자 각 배열요소 사이즈
    // 메모리 크기를 두 값으로 나누어 전달받으며, 할당된 공간의 값을 모두 0으로 바꾼다.
    void *calloc(size_t nelm, size_t elsize);
    
    int *iNum1 = (int *)malloc(5 * sizeof(int));
    int *iNum2 = (int *)calloc(5, sizeof(int));
    int *iNum3 = (int *)calloc(1, 5 * sizeof(int));

    // 이미 할만한 공간 크기 변경
    // 기존 배열 자료 유지 하면서 배열 길이 늘릴 수 있다.
    void *realloc(void *memblock, size_t size);

    // 할당된 메모리를 해제한다.
    // free 함수를 사용하지 않을 시 메모시 누수(메모리 Leak) 발생할 수 있다.
    void free(void * ptr);

}