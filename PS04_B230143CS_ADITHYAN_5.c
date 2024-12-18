#include <stdio.h>

int main(){
    float price; int code; float qty;
    printf("Product Code= ");
    scanf("%d", &code);
    printf("Quantity= ");
    scanf("%f", &qty);
    switch(code){
        case 1: 
            price=10*qty;
            break;
        case 2:
            price=15*qty;
            break;
        case 3:
            price=5*qty;
            break;
        case 4:
            price=3*qty;
            break;
        case 5:
            price=12*qty;
            break;
        default: printf("Invalid Product Code."); return 0;
    }
    printf("Total Price = %f", price);
}