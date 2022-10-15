#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, tot, avg, percent;
    printf("enter first subject number out of 100: \n");
    scanf("%f", &sub1);
    printf("enter second subject number out of 100 : \n");
    scanf("%f", &sub2);
    printf("enter third subject number out of 100 : \n");
    scanf("%f", &sub3);
    printf("enter fourth subject number out of 100 : \n");
    scanf("%f", &sub4);
    printf("enter fivth subject number out of 100 : \n");
    scanf("%f", &sub5);
    tot = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("your total marks= %f \n", tot);
    avg = tot / 5;
    printf("your average is= %2.f \n", avg);
    percent = tot / 500 * 100;
    printf("your percentage is = %2.f \n", percent);
    return 0;
}