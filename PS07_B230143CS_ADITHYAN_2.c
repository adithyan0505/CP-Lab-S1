#include <stdio.h>

int n;
int arr[100][3];

int highm(int);
int lowm(int);
float avgm(int);

int main()
{
    printf("Enter number of students:\n");
    scanf("%d",&n);
    printf("\nEnter marks:\n");
    for(int i=0;i<n;++i)
        for(int j=0;j<3;++j)
        scanf("%d",&arr[i][j]);
    int ch,cid;
    do
    {
      printf("\n\nPlease enter a number indicating your choice");
      printf("\n1: highest mark in a course");
      printf("\n2. lowest mark in a course");
      printf("\n3: average marks for a course");
      printf("\n4: total marks of a student\n0: exit\n");
      scanf("%d",&ch);
      if(ch==4)
      {
        int rid; int sum=0;
        printf("Enter row index: ");
        scanf("%d",&rid);
        for(int j=0;j<3;++j)
        sum+=arr[rid][j];
        printf("Total marks of student %d : %d",rid,sum);
      }
      else
      {
        switch(ch)
        {
            case 1: printf("Enter course ID: ");
                    scanf("%d",&cid);
                    printf("Highest mark in course %d : %d",cid,highm(cid));
                    break;
            case 2: printf("Enter course ID: ");
                    scanf("%d",&cid);
                    printf("Lowest mark in course %d : %d",cid,lowm(cid));
                    break;
            case 3: printf("Enter course ID: ");
                    scanf("%d",&cid);
                    printf("Average marks for course %d : %f",cid,avgm(cid));
                    break;
            case 0: break;
            default: break;
        }
      }
    } while (ch!=0);
    return 0;
}

int highm(int id)
{   
    int max=arr[0][id];
    for(int i=0;i<n;++i)
    {   
        if(arr[i][id]>max)
        max=arr[i][id];
    }
    return max;
}

int lowm(int id)
{
    int min=arr[0][id];
    for(int i=0;i<n;++i)
    {   
        if(arr[i][id]<min)
        min=arr[i][id];
    }
    return min;    
}

float avgm(int id)
{
    float sum=0;
    for(int i=0;i<n;++i)
    sum+=arr[i][id];
    return (sum/n);
}