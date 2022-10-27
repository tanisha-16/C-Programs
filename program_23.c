#include <stdio.h>

int main()
{
int a,b;
printf("enter first number : \n");
scanf("%d",&a);
printf("enter second number : \n");
scanf("%d",&b);
a+=b;
b-=a;
a+=b;
b=(-b);
printf("the value of a and b respectively %d and %d",a,b);
    return 0;
}

