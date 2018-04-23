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
    // �Ҵ�� ������ ������ �ٲ��� �ʴ´�.
	int iN = 10;
	void *malloc(size_t size);
	int *arr = (int *)malloc(sizeof(int) * iN); 

    // ù ��° ���� �迭��� ����, �� ��° ���� �� �迭��� ������
    // �޸� ũ�⸦ �� ������ ������ ���޹�����, �Ҵ�� ������ ���� ��� 0���� �ٲ۴�.
    void *calloc(size_t nelm, size_t elsize);
    
    int *iNum1 = (int *)malloc(5 * sizeof(int));
    int *iNum2 = (int *)calloc(5, sizeof(int));
    int *iNum3 = (int *)calloc(1, 5 * sizeof(int));

    // �̹� �Ҹ��� ���� ũ�� ����
    // ���� �迭 �ڷ� ���� �ϸ鼭 �迭 ���� �ø� �� �ִ�.
    void *realloc(void *memblock, size_t size);

    // �Ҵ�� �޸𸮸� �����Ѵ�.
    // free �Լ��� ������� ���� �� �޸�� ����(�޸� Leak) �߻��� �� �ִ�.
    void free(void * ptr);

}