#include <stdio.h>

int main()
{
    int num1 = 10;

    printf("%d\n", num1 == 10);
    printf("%d\n", num1 != 5);

    printf("%d\n", num1 > 10);
    printf("%d\n", num1 < 10);

    printf("%d\n", num1 >= 10);
    printf("%d\n", num1 <= 10);

    num1 = 5;
    int num2;

    if (num1)
        num2 = 100;
    else
        num2 = 200;

    printf("%d\n", num2);

    char c1;
    c1 = num1 ? 't' : 'f';

    printf("%c\n", c1);

    num1 = 10;

    num2 = num1 == 10 ? 100 : 200;

    printf("%d\n", num2);

    return 0;
}