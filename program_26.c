#include <stdio.h>

int main()
{
    char g;
    printf("enter your gender: \n");
    scanf("%c",&g);
    if(g=='m'|| g=='M')
    {
        printf("you are in male category");
    }
    else if(g=='f'|| g=='F')
    {
        printf("you are in female category");
    }
    else if(g=='t' || g=='T') 
    {
        printf("you are in third category");
    }
    else 
    {
        printf("enter valid category");
    }

    return 0;
}

