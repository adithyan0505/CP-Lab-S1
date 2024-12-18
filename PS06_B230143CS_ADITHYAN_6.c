#include <stdio.h>

int temp=1;

int isPrime(int num,int upp){
	for(int i=2;i<((num/2)+1);i++){
		if (num%i==0){
			return 0;
		}
	}
	if(num!=upp)
	{
		if (temp!=1)
		{
			printf(", ");
		}
		temp=0;
	}
	return 1;
}

int main(){
	int l,u;
	printf("Lower Bound: ");
	scanf("%d",&l);
	printf("Upper Bound: ");
	scanf("%d",&u);
	printf("\nPrime numbers in the range %d to %d: ",l,u);
	for(int i=l;i<=u;i++){
		if(isPrime(i,u)==1)
		printf("%d",i);
	}
	printf("\n");
	return 0;
}
