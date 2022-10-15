// for finding angle of third angle of triangle
#include <stdio.h>
void main(){
// suppose a,b,c are 3 angles of triangle
int a,b,c;
printf("enter angle a \n");
scanf("%d",&a);
printf("enter angle b \n");
scanf("%d",&b);
c=180-(a+b);
printf("value of third angle is %d \n",c);

}