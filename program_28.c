#include <stdio.h>

int main()
{
  int a,b,c;
  printf("enter value of a :");
  scanf("%d",&a);
  printf("enter value of b :");
  scanf("%d",&b);
  printf("before swapping value of a and b is %d , %d respectively \n",a,b);
  c=a;
  a=b;
  b=c;
  printf("after swapping value of a and b is %d , %d respectively \n",a,b);
    return 0;
}

