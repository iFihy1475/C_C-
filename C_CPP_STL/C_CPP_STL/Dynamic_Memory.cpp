// Reference : blockdmask.tistory.com

// ���� �Ҵ� : ���α׷� ���� ���� �޸� ���� �Ҵ�. ��� �� ���� ����

// Dynamic Programming Header File
#include <stdlib.h>
#include <iostream>

// �Ҵ� �Լ� : malloc
// �޸� �Ҵ� �� �ʱ�ȭ : calloc
// �޸� �߰� �Ҵ� : realloc
// �޸� ���� �Լ� : free

int main()
{
	// �Ҵ���� �޸� ũ�⸦ ���ڷ� ����
	int iN = 10;
	void *malloc(size_t size);
	int *arr = (int *)malloc(sizeof(int) * iN); 
}