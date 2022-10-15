// for finding area and perimeter of rectangle
#include <stdio.h>
void main(){
float l,b,perimeter,area;
printf("enter length of rectangle : \n");
scanf("%f",&l);
printf("enter breadth of rectangle : \n");
scanf("%f",&b);
perimeter=2*(l+b);
area=l*b;
printf("perimeter of the rectangle is : %f \n",perimeter);
printf("area of the rectangle is : %f \n",area);

}