#include <stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The given number is pallindrome");
    }
    else
    {
        printf("The given number is not a pallindrome");
    }
    return 0;
}
