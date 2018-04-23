#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *iAr, iSize, i;

    iSize = 5;
    iAr = (int *)malloc(iSize * sizeof(int)); // 메모리 할당
    for (i = 0; i < iSize; ++i)
        iAr[i] = i;
    for (i = 0; i < iSize; ++i)
        printf("%d", iAr[i]);
    printf("\n");

    iSize = 10;
    iAr = (int *)realloc(iAr, iSize * sizeof(int));
    for (i = 5; i < iSize; ++i)
        iAr[i] = i;
    for (i = 0; i < iSize; ++i)
        printf("%d", iAr[i]);
    printf("\n");


    free(iAr); // 할당된 메모리 해제
}