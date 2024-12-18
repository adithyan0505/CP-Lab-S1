#include <stdio.h>

struct student{
    char rollno[10];
    int marks;
    char grade;
};

struct student M[100];

char marksToGrade(int);
void printResult(int);
void printStudent(struct student);

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("\nEnter rollno: ");
        scanf("%s",M[i].rollno);
        printf("Enter marks: ");
        scanf("%d",&M[i].marks);
        M[i].grade = marksToGrade(M[i].marks);
    }
    printResult(n);
}

char marksToGrade(int mark)
{
    if((mark>100)||(mark<0)) return '-';
    if(mark>=80) return 'A';
    if(mark>=60) return 'B';
    if(mark>=50) return 'P';
    if(mark>=0) return 'F';
}

void printResult(int num)
{   printf("\nRollNumber\tMarks\tGrade");
    for(int i=0;i<num;++i)
    printStudent(M[i]);
}

void printStudent(struct student S)
{
    printf("\n%s\t%d\t%c",S.rollno,S.marks,S.grade);
}