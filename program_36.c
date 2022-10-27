#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the (x,y) coordinates:");
    scanf("%d,%d",&x,&y);
    if((x>0)&&(y>0))
    {
        printf("(%d,%d) lies in first quadrant.",x,y);
    }
    else if((x<0)&&(y>0))
    {
        printf("(%d,%d) lies in second quadrant.",x,y);
    }
    else if((x<0)&&(y<0))
    {
        printf("(%d,%d) lies in third quadrant.",x,y);
    }
    else
    {
        printf("(%d,%d) lies in fourth quadrant.",x,y);
    }

    return 0;
}

