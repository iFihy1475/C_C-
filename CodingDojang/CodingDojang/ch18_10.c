#include <stdio.h>

int main()
{
    int iKor, iEng, iMat, iSci;
    float iAvg;

    scanf("%d %d %d %d", &iKor, &iEng, &iMat, &iSci);

    iAvg = (float)(iKor + iEng + iMat + iSci) / 4;

    if (iKor > 100 || iKor < 0) {
        printf("�߸��� ����\n");
        return 0;
    }
    if (iEng > 100 || iEng < 0) {
        printf("�߸��� ����\n");
        return 0;
    }
    if (iMat > 100 || iMat < 0) {
        printf("�߸��� ����\n");
        return 0;
    }
    if (iSci > 100 || iSci < 0) {
        printf("�߸��� ����\n");
        return 0;
    }

    if (iAvg >= 85)
        printf("�հ�\n");
    else
        printf("���հ�\n");

    return 0;
}