// enter length in centimeter and then convert it into meter and kilometer
#include <stdio.h>
 void main(){
float l,m,km;
printf("enter length in cm : \n");
scanf("%f",&l);
m=l*0.01;
km=l*0.00001;
printf(" length in meter is : %f \n",m);
printf("length in kilometer is : %f \n",km);
}