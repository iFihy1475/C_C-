#include <stdio.h>

int main()
{
    char cCh1;

    scanf("%c", &cCh1);

    if (cCh1 != 'k')
        printf("��\n");
    else
        printf("����\n");

    if (cCh1 > 'h')
        printf("��\n");
    else
        printf("����\n");

    if (cCh1 <= 'o')
        printf("��\n");
    else
        printf("����\n");

    return 0;
}