// for calculating sqaure root of numbers
// #include <math.h>
// #include <stdio.h>

// int main() {
//    double number, squareRoot;

//    printf("Enter a number: ");
//    scanf("%lf", &number);

//    // computing the square root
//    squareRoot = sqrt(number);

//    printf("Square root of %.2lf =  %.2lf", number, squareRoot);

//    return 0;
// }

#include<stdio.h>
int squareroot(int val){
    if(val==0 || val==1){
        return val;
    }
    int i=1,result=1;
    while(result<=val){
        i++;
        result=i*i;
    }
    return i-1;
}
void main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    int result=squareroot(number);
    printf("%d",result);
}