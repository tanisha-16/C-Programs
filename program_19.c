#include <stdio.h>
int main()
{

    int age;
    float weight, height;
    printf("enter your age: \n");
    scanf("%d", &age);
    printf("enter your weight: \n");
    scanf("%d", &weight);
    printf("enter your height: \n");
    scanf("%d", &height);
    if (age >= 18)
    {
        if (weight >= 60)
        {
            if (height >= 5.5)
            {
                printf("you are eligible for NCC");
            }
            else
            {
                printf("your height is not fit");
            }
        }
        else
        {
            printf("your weight is not fit");
        }
    }
        else
        {
            printf("your age is below 18");
        }

        return 0;
    }