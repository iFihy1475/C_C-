#include <stdio.h>

int main()
{
    // �ڷ��� ������
    int num1;

    // ������ ��Ģ
    // ���� ���ڿ� ���� ���
    // ��ҹ��� ����
    // ���ں��� ����, ���ڷ� ���� X
    // _(���� ����)�� ������ ���ִ�.
    // C ��� Ű��(int, short, long, float, void, if, for, while, switch ��) ��� �Ұ�

    // �ڷ��� ����
    char cChar; // 1Byte
    short sShort; // 2Byte
    int iInt; // 4Byte
    long lLong; // 8Byte..

    float fFloat; // 4Byte
    double dDouble; // 8Byte..

    // void vVoid; // ���� X


    int iNum1, iNum2, iNum3; // ���� ����
    iNum1 = 10; // ������ ���� �Ҵ��Ѵ�.
    iNum2 = 20;
    iNum3 = 30;

    printf("%d %d %d\n", iNum1, iNum2, iNum3);
    

    int iNum4 = 11, iNum5 = 22, iNum6 = 33;
    
    printf("%d %d %d\n", iNum4, iNum5, iNum6);
    return 0;
}