#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.1459265358979323846
#endif

int main()
{
    float diameter;
    float radius;
    float area;

    scanf("%f", &diameter);
    
    // radius = diamete / 2;
    // area = M_PI * radius * radius;
    area = M_PI * (diameter / 2) * (diameter / 2);

    printf("%f\n", area);

    return 0;
}