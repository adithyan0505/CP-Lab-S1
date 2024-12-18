#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct Student{
    char rollnum[10];
    int marks;
    char result[5];
}Student;

void printStudent(Student *s);
void assignResult(Student *s);
int isValidRollnumber(char *str);

int main()
{
    Student st;
    scanf("%s",st.rollnum);
    scanf("%d",&st.marks);
    if(isValidRollnumber(st.rollnum)!=1)
    {
        printf("INVALID");
        return 0;
    }
    assignResult(&st);
    printStudent(&st);
    return 0;
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

void printStudent(Student *s)
{
    printf("%s %d %s",s->rollnum,s->marks,s->result);
}