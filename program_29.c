#include <stdio.h>
int main()
{
  int a,b;
  printf("enter the value of a : ");
  scanf("%d",&a);
  printf("enter the value of b : ");
  scanf("%d",&b);
  if(a>b){
      printf("maximum between two no. is %d",a);
  }
  else {
      printf("maximum between two no. is %d",b);
  }
    return 0;
}

