#include <stdio.h>

int main()
{
    int tm, hr, mn;
    printf("Enter time in hours and minutes:\n");
    scanf("%d%d", &hr,&mn);
    tm = hr*60+mn;
    printf("Output: Minutes = %d", tm);
    return 0;
}