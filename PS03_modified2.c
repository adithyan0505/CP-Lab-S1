#include <stdio.h>

int main()
{
    int num, d0, d1, d2, d3;
    printf("Enter the 4 digit number:\n");
    scanf("%d", &num);
    d0 = num%10; d1 = (num/10)%10; d2 = (num/100)%10; d3=(num/1000);
    printf("%d%d%d%d",d0,d1,d2,d3);
    return 0;
}