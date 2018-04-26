#include <stdio.h>

int main()
{
    char cCh1;

    scanf("%c", &cCh1);

    if (cCh1 != 'k')
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    if (cCh1 > 'h')
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    if (cCh1 <= 'o')
        printf("Âü\n");
    else
        printf("°ÅÁş\n");

    return 0;
}