#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           c=c+1; 
        }
        
    }
    if(c==2)
    {
        printf("The given no. is a prime number");
    }
    else
    {
        printf("The given no. is not a prime number");
    }
}