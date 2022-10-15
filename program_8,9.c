// coversion of temperature in c>>f and f>>c
#include <stdio.h>
void main(){
float tmp,fer;
printf(" enter the temperature in celcius : \n");
scanf("%f", &tmp);
fer=(tmp * 1.8) + 32;
printf("temperature in fahrenheit:%f",fer);
}
// f>>
#include <stdio.h>
void main(){
float tmp,cel;
printf(" enter the temperature in fahrenheit : \n");
scanf("%f", &tmp);
cel=(tmp - 32) * 5/9 ;
printf("temperacture in celcius: %f",cel);
}
