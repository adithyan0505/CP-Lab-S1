#include <stdio.h>

int main(){
    float marks; char grade;
    printf("Marks = ");
    scanf("%f", &marks);
    if((marks>100) || (marks<0)){
        printf("Invalid input.\nPlease enter marks in the range 0-100.");
        return 0;
    }
    if ((marks<=100) && (marks>=80)){
        grade='A';
    }
    if ((marks<80)&&(marks>=60)){
        grade='B';
    }
    if ((marks<60)&&(marks>=50)){
        grade='P';
    }
    if (marks<50)
    grade='F';
    
    printf("Grade = %c", grade);
    return 0;
}