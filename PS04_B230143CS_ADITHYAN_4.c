#include <stdio.h>

int main(){
    float sal; int work; float rate;
    printf("Number of hrs per week = ");
    scanf("%d", &work);
    printf("Hourly rate = ");
    scanf("%f", &rate);
    if(work<=40){
        sal=work*rate;
        printf("Weekly Salary = %f", sal);
    }
    else{
        sal=40*rate+(work-40)*(rate/2);
        printf("Weekly Salary = %f\t", sal);
        printf("extra hours = %d", work-40);
    }
    return 0;
}