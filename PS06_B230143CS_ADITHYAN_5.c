#include <stdio.h>

float getPrice(int code,float qty){
	switch(code){
		case 1: return(10*qty);
		case 2: return(15*qty);
		case 3: return(5*qty);
		case 4: return(3*qty);
		case 5: return(12*qty);
		default: return 0;
	}
} 

int main(){
	int pc=1;float q,total=0;
	printf("Enter product code and quantity (0 to terminate iteration):");
	do{
		printf("\nProduct code(1-5) : ");
		scanf("%d",&pc);
		if((pc<=5)&&(pc>=1)){
			printf("Quantity: ");
			scanf("%f",&q);
			printf("Price for Product %d: %f",pc,getPrice(pc,q));
			printf("\n");
			total+=getPrice(pc,q);
		}
	}while(pc!=0); 
	printf("Total price: %f\n",total);
	return 0;	
}
