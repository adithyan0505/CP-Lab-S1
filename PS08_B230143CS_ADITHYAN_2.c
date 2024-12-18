#include <stdio.h>

int n;

struct student{
    char rollno[10];
    int marks;
    char grade;
};

struct student M[100];

void printResult(void);

int main()
{
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("\nEnter rollno: ");
        scanf("%s",M[i].rollno);
        printf("Enter marks: ");
        scanf("%d",&M[i].marks);
        if((M[i].rollno[0] == 'M')||(M[i].rollno[0] == 'm'))
        {
            if((M[i].marks<=100)&&(M[i].marks>=50))
            M[i].grade = 'P';
            else if (M[i].marks>=0)
            M[i].grade = 'F';
            else
            M[i].grade = '-';
        }
    }
    printResult();
}

void printResult()
{
    printf("\nRollNumber\tMarks/Grade");
    for(int i=0;i<n;++i)
    {
        if((M[i].rollno[0] == 'M')||(M[i].rollno[0] == 'm'))
        printf("\n%s\t%c",M[i].rollno,M[i].grade);
        else
        printf("\n%s\t%d",M[i].rollno,M[i].marks);
    }
}