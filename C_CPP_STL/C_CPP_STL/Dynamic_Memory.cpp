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
	int iN = 10;
	void *malloc(size_t size);
	int *arr = (int *)malloc(sizeof(int) * iN); 
}