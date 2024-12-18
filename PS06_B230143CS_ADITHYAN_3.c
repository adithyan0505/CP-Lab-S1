#include <stdio.h>

char marksToGrade(float mark){	
	if((mark>=80)&&(mark<=100))
	return 'A';
	if((mark>=60)&&(mark<80))
	return 'B';
	if((mark>=50)&&(mark<60))
	return 'C';
	if(mark<50)
	return 'F';

	return ' ';
}

int main(){
	int n; float m;
	printf("Enter number of students: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("\nEnter mark for student %d: ",i);
		scanf("%f",&m);
		printf("Grade of student %d: %c\n",i,marksToGrade(m));
	}
	return 0;
}
