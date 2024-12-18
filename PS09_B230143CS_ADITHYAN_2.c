#include <stdio.h>

void swap(int *a, int *b);
int smallest(int a[]);

int main()
{
    int A[5];
    for(int i=0;i<5;++i)
    scanf("%d",&A[i]);
    int s = smallest(A);
    swap(&A[s],&A[0]);
    for(int i=0;i<5;++i)
    printf("%d ",A[i]);
}

int smallest(int a[])
{
    int sml = 0;
    for(int i=0;i<5;++i)
    if(a[i]<a[sml]) sml=i;
    return sml;
}

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}