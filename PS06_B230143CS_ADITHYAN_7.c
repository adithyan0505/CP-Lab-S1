#include <stdio.h>

int factorial(int n){
    if (n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    int n,r,fact;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d Factorial = %d",n,factorial(n));
    return 0;
}
