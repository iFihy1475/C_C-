#include <stdio.h>

int main()
{
    printf("%d\n", 10); // 10 : ���� ���ͷ�
    printf("%f\n", 0.1f); // 0.100000 : �Ǽ� ���ͷ�
    printf("%c\n", 'a'); // a : ���� ���ͷ�
    printf("%s\n", "Hello, world!"); // Hello, world! : ���ڿ� ���ͷ�


    printf("%d\n", 19); // 10�� ���� ���ͷ�
    printf("0%o\n", 017); // 8�� ���� ���ͷ�
    printf("0x%X\n", 0x1F); // 16�� ���� ���ͷ�

    
    printf("%f\n", 0.1f); // 0.100000 : �Ǽ� ���ͷ� �Ҽ��� ǥ��
    printf("%f\n", 0.1F); // 0.100000 : �Ǽ� ���ͷ� �Ҽ��� ǥ��
    printf("%f\n", 1.0e-5f); // 0.000010 : �Ǽ� ���ͷ� ���� ǥ���
    printf("%f\n", 1.0E-5F); // 0.000010 : �Ǽ� ���ͷ� ���� ǥ���

    
    // ��� ����� ���ÿ� �ʱ�ȭ
    const int con1 = 1;
    const float con2 = 0.1f;
    const char con3 = 'a';


    printf("%d %f %c", con1, con2, con3);

    // ���� ���ͷ� ũ�� ��Ȯ�� ǥ��, ���̻�(Suffix)
    printf("%ld\n", -10L); // long ũ���� ���� ���ͷ�
    printf("%lld\n", -1234567890123456789LL); // long long ũ���� ���� ���ͷ�

    printf("%u\n", 10U); // unsigned int ũ���� ���� ���ͷ�
    printf("%lu\n", 1234567890UL); // unsigned long ũ���� ���� ���ͷ�

    printf("%lu\n", 10UL); // unsigned long ũ���� ���� ���ͷ�
    printf("%llu\n", 1234567890123456789ULL); // unsigned long long ũ���� ���� ���ͷ�

    /*
    ���̻�         �ڷ���
    (����)         int
    l, L           long
    u, U           unsigned int
    ul, UL         unsigned long
    ll, LL         long long
    ull, ULL       unsigned long long
    */

    printf("0%lo\n", 017L);
    printf("0%lo\n", 017UL);
    printf("0x%lX\n", 0x7FFFFFFL);
    printf("0x%lX\n", 0xFFFFFFFFUL);

    printf("%f\n", 0.1f);
    printf("%f\n", 0.1F);
    printf("%f\n", 0.1);
    printf("%Lf\n", 0.1l);
    printf("%Lf\n", 0.1L);

    printf("%f\n", 1.0e-5f);
    printf("%f\n", 1.0e-5F);
    printf("%f\n", 1.0e-5);
    printf("%Lf\n", 1.0e-5l);
    printf("%Lf\n", 1.0e-5L);
    
    /*
    ���̻�         �ڷ���
    f, F           float
    (����)         double
    l, L           long double
    */
    
    return 0;
}