#include <stdio.h>

int main()
{
    char cChar; // 1Byte : -128 ~ 127
    signed sChar;
    unsigned uChar; // 1Byte : 0 ~ 255

    short sShort; // 2Byte : -32,768 ~ 32,767
    unsigned uShort; // 2Byte : 0 ~ 65,535

    int iInt; // 4Byte : -2,147,483,648 ~ 2,147,483,647
    unsigned uInt; // 4Byte : 0 ~ 4,294,967,295
    
    long lLong; // 4Byte : -2,147,483,648 ~ 2,147,483,647
    unsigned uLong; // 4Byte : 0 ~ 4,294,967,295

    long long llLong; // 8Byte : -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
    unsigned uuLong; // 8Byte : 0 ~ 18,446,744,073,709,551,615

    /*
    Long�� OS�� Platform ���� ũ�Ⱑ �ٸ���.
    Windows x86(32 Bit) : 4 Byte
            x86-64(64 Bit) : 4 Byte
    Linux   x86(32 Bit) : 4 Byte
            x86-64(64 Bit) : 8 Byte
    OS X    x86(32 Bit) : 4 Byte
            x86-64(64 Bit) : 8 Byte
    */


    char cNum1 = -10;
    short sNum1 = 30000;
    int iNum1 = -1234567890;
    long lNum1 = 1234567890;
    long long llNum1 = -1234567890123456789;

    // char, short, int�� %d�� ���, long�� %ld, long long�� %lld�� ���
    printf("%d %d %d %ld %lld\n", cNum1, sNum1, iNum1, lNum1, llNum1);

    
    unsigned char cNum2 = 200;
    unsigned short sNum2 = 60000;
    unsigned int iNum2 = 4123456789;
    unsigned long lNum2 = 4123456789;
    unsigned long long llNum2 = 12345678901234567890;

    // unsinged �� ���� ������ %u %lu %llu ���
    printf("%u %u %u %lu %llu\n", cNum2, sNum2, iNum2, lNum2, llNum2);


    // Overflow

    char cNum3 = 128; // ���� �ʰ��ؼ� �ּڰ����� ����
    
    unsigned char uNum3 = 256; // ���� �ʰ��ؼ� �ּڰ����� ����

    // Underflow

    char cNum4 = -129; // ���� �ʰ��ؼ� �ִ񰪺��� ����

    unsigned char uNum4 = -1; // ���� �ʰ��ؼ� �ִ񰪺��� ����

    printf("%d %u\n", cNum4, uNum4);
    printf("%d %u\n", cNum3, uNum3);

    return 0; 
}