#include <stdio.h>

void readMarks(int a[], int n);
void marksToGrade(int a[], char b[], int n);
void printGradeCount(char a[], int n);

int main()
{
    int n;
    scanf("%d",&n);
    int M[n]; char G[n];
    readMarks(M,n);
    marksToGrade(M,G,n);
    printGradeCount(G,n);
}

void readMarks(int a[], int n)
{
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
}

void marksToGrade(int a[], char b[], int n)
{
    for(int i=0;i<n;++i)
    {
        if(a[i]>=80) b[i]='A';
        else if(a[i]>=60) b[i]='B';
        else if(a[i]>=50) b[i]='P';
        else b[i]='F';
    }
}

void printGradeCount(char a[], int n)
{
    char arr[] = {'A','B','P','F'};
    int count=0;
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<n;++j)
            if(a[j]==arr[i]) ++count;
        printf("\n%c\t%d",arr[i],count);
        count=0;
    }
}