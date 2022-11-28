#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    printf("enter number of terms:");
    scanf("%d",&n);//4
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);//0 1 1 2
        c=a+b;//c=5
        a=b;//a=3
        b=c;//b=5
        
    }
    return 0;
}
// 0 1 1 2