#include <iostream>
// C Language������ time.h
#include <ctime>
using namespace std;

int main()
{
    // ���α׷��� �����ϰ� ���� ���μ����� �Ҹ��� �ð� ����
    clock_t start = clock();

    // CLOCKS_PER_SEC : MACRO clock_t ���� CLOCKS_PER_SEC�� ������ �Ҹ��� �ð��� ���´�.

    printf("%0.5f\n", (float)clock() - start / CLOCKS_PER_SEC);
    // ���α׷� �����ϰ� ���� ��������� �ð� - ���α׷� ����ð����� �Ʊ� start ���������� �ð�
    // = start ������������ ���� printf ���α��� �ɸ��ð�
    return 0;
}