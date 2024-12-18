#include <stdio.h>

int main()
{
    float A, B, C, total;
    printf("marksA: ");
    scanf("%f", &A);
    printf("marksB: ");
    scanf("%f", &B);
    printf("marksC: ");
    scanf("%f", &C);
    total= A/2+B/4+C/4;
    printf("Total Marks: %f", total);
    return 0;
}