#include <stdio.h>

int sumDigits(unsigned long int num)
{
	int sum=0;
	do{
		sum+=num%10;
		num=num/10;
	}while(num>0);
	return sum;
}

int main(){
	unsigned long int n;
	printf("Enter a non-negative integer: ");
	scanf("%lu",&n);
	printf("\nSum of digits = %d\n",sumDigits(n));
	return 0;
}
