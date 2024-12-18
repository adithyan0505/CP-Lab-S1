#include <stdio.h>

char marksToGrade(int);
void printGradeCount(void);
int gradeCount(char);

char G[100];
int n;

int main()
{   
    printf("Enter number of students:\n");
    scanf("%d",&n);
    int M[n];
    printf("\nEnter the Marks of students:\n");
    for(int i=0;i<n;++i)
    scanf("%d",&M[i]);
    for(int i=0;i<n;++i)
    G[i] = marksToGrade(M[i]);
    printGradeCount();
    return 0;
}

char marksToGrade(int num)
{
    if((num>100)||(num<0)) return('-');
    if(num>=80) return('A');
    if(num>=60) return('B');
    if(num>=50) return('P');
    if(num>=0) return('F');
}

void printGradeCount()
{
    char arr[] = {'A','B','P','F'};
    printf("\nGrade\t\tCount");
    for(int i=0;i<4;++i)
    printf("\n%c\t\t%d",arr[i],gradeCount(arr[i]));
}

int gradeCount(char grade)
{
    int count=0;
    for(int i=0;i<n;++i)
    {
        if(G[i]==grade)
        ++count;
    }
    return count;
}