#include <stdio.h>

int main()
{   float marks; char grade;
    printf("Marks = ");
    scanf("%f", &marks);
    if(marks>100){
        printf("Invalid input.\nPlease enter marks in the range 0-100.");
        return 0;
    }
    if(marks<0){
        printf("Invalid input.\nPlease enter marks in the range 0-100.");
        return 0;
    }
    if(marks<=100){
        if(marks>=0){
            grade='F';
            if(marks>=50){
                grade='P';
                if(marks>=60){
                    grade='B';
                    if(marks>=80){
                        grade='A';
                    }
                }
            }
        }
    }
    printf("Grade = %c", grade);
    return 0;
}
