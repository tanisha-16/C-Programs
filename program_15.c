#include <stdio.h>
#include <math.h>
int main(){
float a,area;
printf("enter side of triangle : \n");
scanf("%f",&a);
area=(sqrt(3) / 4) * (a*a);
printf("the area of triangle is %.2f sq. units \n",area);
    return 0;
}