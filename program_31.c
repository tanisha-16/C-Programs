#include <stdio.h>

void main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if (((ch>='a')||(ch>='A'))&&((ch<='z')||(ch<='Z')))
    {
        printf("character is alphabet \n");
    }
    else
    {
        printf("character is not alphabet \n");
    }
}

