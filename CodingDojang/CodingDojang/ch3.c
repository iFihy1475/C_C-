#include <stdio.h>

// .c → .obj → .exe

int main()
{
	printf("Hello, World!\n");

	// 서식 지정자(Format Specifier)
	// 같은 내용 여러개 출력, 출력 형태 변경
	printf("%s\n", "Hello, World!");
	printf("%s %s\n", "Hello", "1234");

	printf("%s,%s\n", "Hello", "1234");
	printf("%s%s\n", "Hello,", "1234");

	return 0;
}