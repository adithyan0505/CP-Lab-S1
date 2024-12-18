#include <stdio.h>

int main(){
    int n; int marks; int A, B, P, F;
    A=B=P=F=0;
    printf("Enter the number of students = "); scanf("%d", &n);
    int i;
    for(i=1;i<=n;i++){
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
    }
    printf("\nThe total number of students with A grade = %d\n", A);
    printf("The total number of students with B grade = %d\n", B);
    printf("The total number of students with P grade = %d\n", P);
    printf("The total number of students with F grade = %d\n", F);
    return 0;
    
}

