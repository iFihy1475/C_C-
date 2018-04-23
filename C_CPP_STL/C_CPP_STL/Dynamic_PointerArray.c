#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char * cArr[3];
    char cTmp[30];
    int len, i;

    for (i = 0; i < 3; ++i)
    {
        printf("[%d] : ", i);
        scanf("%s", cTmp);
        len = strlen(cTmp) + 1;

        cArr[i] = (char *)malloc(sizeof(char) * len);
        strcpy(cArr[i], cTmp);
    }

    printf("\n");

    for (i = 0; i < 3; ++i)
    {
        printf("cArr[%d] = %s\n", i, cArr[i]);
    }
    for (i = 0; i < 3; ++i)
    {
        free(cArr[i]);
    }
    return 0;
}