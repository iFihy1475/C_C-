#include <stdio.h>

// 분해 : 복합한 문제를 작은 문제로
// 패턴 인식 : 문제 안에서 유사성 발견
// 추상화 : 문제 핵심만 집중, 부차적인 것 제외
// 알고리즘 : 정의한 문제를 해결하는 절차 (일반화 / 모델링 포함)

struct Hello 
{
	int iA;
	int iB;
};

// 세미콜론(;)

int main()
{
	// Hello, world! 출력
	printf("Hello, world!\n");

	int iA = 1 + 2; // 더하기
	printf("Hello, world\n");

	/*
	printf("Comment\n");
	printf("주석\n"):
	*/

	printf("주석 확인!"/* 이 부분은 주석입니다. */);
    
}