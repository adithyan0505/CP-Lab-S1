#include <stdio.h>

int main()
{
    float A, B, C, sum, per;
    printf("marksA: ");
    scanf("%f", &A);
    printf("marksB: ");
    scanf("%f", &B);
    printf("marksC: ");
    scanf("%f", &C);
    sum = A+B+C;
    per = sum/3;
    printf("\nCourse A: %f\nCourse B: %f\nCourse C: %f\nTotal Marks: %f\nPercentage: %f", A, B, C, sum, per);
    return 0;
}