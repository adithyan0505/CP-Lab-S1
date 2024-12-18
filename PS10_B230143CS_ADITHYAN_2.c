#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct Student{
    char rollnum[10];
    int marks;
    char result[5];
}Student;

void PrintPassed(Student []);
void assignResult(Student *s);
int isValidRollnumber(char *str);

int main()
{
    int i=0;
    Student arr[5];
    while(1)
    {
        scanf("%s",arr[i].rollnum);
        if(isValidRollnumber(arr[i].rollnum)!=1)
        {
            printf("INVALID\n");
            continue;
        }
        scanf("%d",&arr[i].marks);
        assignResult(&arr[i]);
        if (i==4) break;
        ++i;
    }    
    PrintPassed(arr);
}

int isValidRollnumber(char *str)
{
    if (strlen(str)!=8) return 0;
    if (strncmp(str,"BCS2",4)!=0) return 0;
    if (!((*(str+4)>='0')&&(*(str+4)<='3'))) return 0;
    if (!((isdigit(*(str+5)))&&(isdigit(*(str+6)))&&(isdigit(*(str+7)))))
    return 0;
    return 1;
}

void assignResult(Student *s)
{
    if(s->marks>40)
    strcpy(s->result,"Pass");
    else 
    strcpy(s->result,"Fail");
}

void PrintPassed(Student S[])
{
    printf("\n");
    for(int i=0;i<5;++i)
    if (S[i].result[0] == 'P') printf("%s\n",S[i].rollnum);
}