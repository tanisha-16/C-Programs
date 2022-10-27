#include <stdio.h>

int main()
{
    float marks;
    printf("enter your marks: \n");
    scanf("%f",&marks);
    
    if(marks>=33)
    {
        printf("congrats you are pass!!!");
    }
    else
    {
        printf("oops you are fail...");
    }

    return 0;
}
