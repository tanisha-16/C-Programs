#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("it is a perfect no.");
    }
    else
    {
        printf("it is not a perfect no.");
    }
    return 0;
}
