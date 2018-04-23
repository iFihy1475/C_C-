#include <stdio.h>
#include <stdint.h>

// 16Bit, 32Bit, 64Bit CPU�� OS�� �������� ���� �ڷ��� ũ�⵵ �׶��׶� �޶�����.
// �̷��� ȥ���� ������ C99 ǥ�غ��� stdint.h Header File�� �߰��ߴ�.
int main()
{

    // �ּҰ�, �ִ밪�� stdint.h�� ���� �Ǿ� �����Ƿ� limits.h ��� ������ �� �ʿ� ����.

    int8_t iNum1 = -128; // 8Bit ũ���� ��ȣ �ִ� ������ ����
    int16_t iNum2 = 32767; // 16Bit ũ���� ��ȣ �ִ� ������ ����
    int32_t iNum3 = 2147483647; // 32Bit ũ���� ��ȣ �ִ� ������ ����
    int64_t iNum4 = 9223372036854775807;  // 64Bit ũ���� ��ȣ �ִ� ������ ����

    // int64_t�� ���� ������ %lld ���
    printf("%d %d %d %lld\n", iNum1, iNum2, iNum3, iNum4);

    uint8_t iNum5 = 255; // 8Bit ũ���� ��ȣ ���� ������ ����
    uint16_t iNum6 = 65535; // 16Bit ũ���� ��ȣ ���� ������ ����
    uint32_t iNum7 = 4294967295; // 32Bit ũ���� ��ȣ ���� ������ ����
    uint64_t iNum8 = 18446744073709551615; // 64Bit ũ���� ��ȣ ���� ������ ����

    printf("%u %u %u %llu\n", iNum5, iNum6, iNum7, iNum8);

    return 0;
}