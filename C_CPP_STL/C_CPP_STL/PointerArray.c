#include <stdio.h>

int main()
{
    // Pointer Array, �����͹迭
    // ������ ���� �迭
    // �迭 ��Ұ� �����͵�� �̷���� �ִ�. char, int ó�� ���� char *, int * �� ��

    // �迭 ����� �ڷ����� char * �� �迭. �� �迭�� ����� ������ 3��

    // const �̿�
    char * cArr[3];
    int i;

    cArr[0] = "BlockDMask";
    cArr[1] = "C Programming";
    cArr[2] = "point_arr";

    for (i = 0; i < 3; ++i)
    {
        printf("%s\n", cArr[i]);
    }
    return 0;
}