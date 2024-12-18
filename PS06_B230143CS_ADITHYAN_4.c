#include <stdio.h>

float getWeeklySalary(int hours,float rate){
	if (hours<=40)
	return(hours*rate);
	else
	return(40*rate+(hours-40)*(rate/2));
}

int main(){
	int n; int hrs;float rt;
	printf("Enter number of employees: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("\nEnter number of hours per week of employee %d: ",i);
		scanf("%d",&hrs);
		printf("Enter hourly rate: ");
		scanf("%f",&rt);
		printf("Weekly Salary of employee %d: %f\n",i,getWeeklySalary(hrs,rt));
	}
	return 0;
}	
