#include <stdio.h>
int main(){
    int no,num;
    printf("enter number : \n");
    scanf("%d",&no);
    if(no<0)
    {
        num=no*(-1);
        printf("absolute no of %d is %d \n",no,num);
    }
    else 
    {
        printf("absolute no of %d is %d \n",no,no);
    }
    
    
    
    return 0;
}
