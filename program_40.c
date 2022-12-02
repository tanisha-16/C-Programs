#include <stdio.h>
int main(){
int n,r,c,arm=0;
printf("enter any number");
scanf("%d",&n);
c=n;
while(n>0)
{
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}
if(c==arm){
    printf("the no. is armstrong no.");
}
else
{
    printf("the no.not armstrong no.");
}
return 0;
}
