#include <stdio.h>

int main(){
    int marks,i; int A, B, P, F;
    A=B=P=F=0;
    marks=0;
    i=1;
    while(marks>=0){
        printf("Marks of student %d = ", i);
        scanf("%d",&marks);
        if ((marks<=100)&&(marks>=80)){
            A+=1;
        }
        else if((marks<80)&&(marks>=60)){
            B+=1;
        }
        else if((marks<60)&&(marks>=50)){
            P+=1;
        }
        else if((marks<50)&&(marks>=0)){
            F+=1;
        }
        i++;
    }
    printf("\nThe total number of students with A grade = %d\n", A);
    printf("The total number of students with B grade = %d\n", B);
    printf("The total number of students with P grade = %d\n", P);
    printf("The total number of students with F grade = %d\n", F);
    return 0;
}