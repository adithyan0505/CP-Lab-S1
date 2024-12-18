#include <stdio.h>

int main(){
    int pcode,up; float qty,price,tp;
    tp=0;
    while(1){
        printf("\nEnter product code between 1 to 5. To terminate enter 0 = ");
        scanf("%d", &pcode);
        if(pcode==0){
            break;
        }
        else if ((pcode<0)||(pcode>5)){
            printf("Please enter a valid product code.\n");
            continue;
        }
        else{
            printf("Quantity = ");
            scanf("%f", &qty);
            printf("\nProduct\tUnit Price\tQuantity\tPrice");
            switch(pcode){
                case 1: up=10;
                        break;
                case 2: up=15;
                        break;
                case 3: up=5;
                        break;
                case 4: up=3;
                        break;
                case 5: up=12;
                        break;
            }
            price=up*qty;
            tp+=price;
            printf("\n%d\t%d\t\t%f\t%f\n",pcode,up,qty,price);
        }  
    }
    printf("\nTotal Price = %f", tp);
}