#include <stdio.h>

int main()
{
    int num, d0, d1, d2;
    printf("Enter the 3 digit number:\n");
    scanf("%d", &num);
    d0 = num%10; d1 = (num/10)%10; d2 = num/100;
    printf("Output:\nDigit0=%d, Digit1=%d, Digit2=%d, sum=%d", d0, d1, d2, d0+d1+d2);
    return 0;
}