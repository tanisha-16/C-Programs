// for finding power of any function
// #include <stdio.h>
// int main() {
//     int base, exp;
//     long double result = 1.0;
//     printf("Enter a base number: ");
//     scanf("%d", &base);
//     printf("Enter an exponent: ");
//     scanf("%d", &exp);

//     while (exp != 0) {
//         result *= base;
//         --exp;
//     }
//     printf("Answer = %.0Lf", result);
//     return 0;
// }
#include<stdio.h>
int power(int a, int b){
    int result=1;
    while(b>0){
        result=result*a;
        b--;
    }
     return result;
     
}
void main(){
    int x, y;
    printf("Enter the number and power");
    scanf("%d %d",&x,&y);
    int result=power(x, y);
    printf("result= %d",result);

}
