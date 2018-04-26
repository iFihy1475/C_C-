#include <stdio.h>

int main()
{
    int iNum1 = 11;
    float fNum2 = 4.4f;

    printf("%f\n", iNum1 + fNum2); // ������ �Ǽ��� ��ȯ
    printf("%f\n", iNum1 - fNum2);
    printf("%f\n", iNum1 * fNum2);
    printf("%f\n", iNum1 / fNum2);

    // �Ͻ��� �� ��ȯ (Implicit Type Conversion)
    // �ڷ��� ũ�Ⱑ ū ��, ǥ�� ������ ���� ������ �ڵ� ��ȯ
    // = �� Ȯ��(Type Promotion)

    long long llNum1 = 123456789000;
    int iNum2 = 10;

    printf("%d\n", sizeof(llNum1));
    printf("%d\n", sizeof iNum2);

    printf("%lld %lld %lld %lld\n", llNum1 + iNum2, llNum1 - iNum2, llNum1 * iNum2, llNum1 / iNum2);
    

    // �ڷ��� ���
    float fNum3 = 11.0f;
    float fNum4 = 5.0f;

    int iNum3 = fNum3 / fNum4;
    printf("%d\n", iNum3); // �Ҽ���(0.2) ����

    // = �� ���(Type Demotion)
    
    char cNum1 = 28;
    int iNum4 = 1000000002;

    char cNum2 = cNum1 + iNum4;
    // char���� ū ���ڴ� ������ �� ����.
    // 28 + 2�� ���� �� �ڸ����� ��������.

    // 1000000002 int 4Byte 0011 1011 1001 1010 1100 1010 0000 0010
    //         28 char 1Byte                              0001 1100
    //         30                                         0001 1110

    //  ����                  ����                          �Ǽ�
    // 1. char      Ȯ��->    5. long long int    Ȯ��->    8. long double   
    //                        4. long int                   7. double       ��   ��
    //                        3. int                        6. float       Ȯ�� ���
    //               <-���   2. short int        <-���


    printf("%d\n", cNum2);

    return 0;
}