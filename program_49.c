// find avg by array
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    float avg;
    printf("no. of term to get their average:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }
    avg=(float)sum/n;
    printf("The average of given number is %0.2f",avg);
}

