#include <stdio.h>

int main(){
    float marks; char grade;
    printf("Marks = ");
    scanf("%f", &marks);
    if((marks<=100)&&(marks>=0)){
        if(marks>=80){
            grade='A';
        }
        else if(marks>=60){
            grade='B';
        }
        else if(marks>=50){
            grade='P';
        }
        else{
            grade='F';
        }
        printf("Grade = %c", grade);
    }
    else{
        printf("Invalid input.\nPlease enter marks in the range 0-100.");
    }
    return 0;
}