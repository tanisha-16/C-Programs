#include<stdio.h>
int main(){
    int i,a;
    printf("enter the no.\n");
    scanf("%d",&a);
    printf("here is your table\n");
    for(i=1;i<=10;i++){
        printf("%d*%d is %d \n",a,i,a*i);
    }
    
    
    return 0;
}
