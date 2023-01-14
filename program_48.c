// takking input from user for an array
#include <stdio.h>
int main()
{
    int i,size;
    int array[i];
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {   
        printf("enter the elements%d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n");
    printf("elements of array are \n");
    for(i=0;i<size;i++)
    {   
        printf("%d  ",array[i]);
    }
    return 0;
}

