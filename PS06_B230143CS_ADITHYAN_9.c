#include <stdio.h>

int gcd(int a, int b){
    if (a%b==0) return b;
    return gcd(b,a%b);
}

int main(){
    int n1,n2;
    printf("a =  ");
    scanf("%d",&n1);
    printf("b =  ");
    scanf("%d",&n2);
    printf("\nGCD of %d and %d: %d",n1,n2,gcd(n1,n2));
    return 0;
}