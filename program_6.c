// for finding diameter,circumfrence and area of circle
#include <stdio.h>
void main(){
float r,dia,cir,area;
printf("enter radius of circle : \n");
scanf("%f",&r);
dia=r*2;
cir=2*3.14*r;
area=3.14*r*r;
printf(" diameter of the circle is : %f \n",dia);
printf("circumference of the circle is : %f \n",cir);
printf("area of the circle is : %f \n",area);
}