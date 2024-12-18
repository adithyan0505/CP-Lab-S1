#include <stdio.h>

int fibonacci(int num){
    if (num==2){
        return 1;
    }
    if (num==1){
        return 0;
    }
    return (fibonacci(num-1)+fibonacci(num-2));
    
}

int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("%dth fibonacci number: %d",n,fibonacci(n));
    return 0;
}
