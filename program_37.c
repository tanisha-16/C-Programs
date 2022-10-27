#include <stdio.h>

int main()
{
    int marks1,marks2,marks3;
    printf("Enter the marks of 1st student:");
    scanf("%d",&marks1);
    printf("Enter the marks of 2nd student:");
    scanf("%d",&marks2);
    printf("Enter the marks of 3rd student:");
    scanf("%d",&marks3);
    if((marks1<marks2)&&(marks1<marks3))
    {
        printf("1st student got the lowest marks");
    }
    else if((marks2<marks1)&&(marks2<marks3))
    {
        printf("2nd student got the lowest marks");
    }
    else
    {
        printf("3rd student got the lowest marks");
    }
    return 0;

}

