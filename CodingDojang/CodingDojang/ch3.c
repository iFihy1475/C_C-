#include <stdio.h>

// .c �� .obj �� .exe

int main()
{
	printf("Hello, World!\n");

	// ���� ������(Format Specifier)
	// ���� ���� ������ ���, ��� ���� ����
	printf("%s\n", "Hello, World!");
	printf("%s %s\n", "Hello", "1234");

	printf("%s,%s\n", "Hello", "1234");
	printf("%s%s\n", "Hello,", "1234");

	return 0;
}