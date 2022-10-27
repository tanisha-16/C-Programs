// swap using xor bitwise operator
#include <stdio.h>

int main()
{
int a,b,sum;
printf("enter value of a : \n");
scanf("%d",&a);
printf("enter value of b : \n");
scanf("%d",&b);
a=a^b;
b=a^b;
a=a^b;
printf("the value of a and b respectively %d and %d",a,b);
    return 0;
}