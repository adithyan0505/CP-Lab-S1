#include <stdio.h>

int main()
{
    int tm, hr, mn;
    printf("Enter time in minutes:\n");
    scanf("%d", &tm);
    hr=tm/60; 
    mn=tm-hr*60;
    printf("Output:\n%d hrs %d minutes", hr, mn);
    return 0;
}