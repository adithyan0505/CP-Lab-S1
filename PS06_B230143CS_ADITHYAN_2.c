#include <stdio.h>

void toFarenheit(){
	float tc,tf;
	printf("\nDegree Celcius\tDegree Farenheit\n");
	for(tc=30;tc<=50;tc++){
		tf=(1.8)*tc+32;
		printf("%f\t%f\n",tc,tf);
	}
}

int main(){
	toFarenheit();
	return 0;
}		
