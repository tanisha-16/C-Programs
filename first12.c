#include<stdio.h>
void printrecursive(int a){
    if(a==-1){
        return;
    }
    printrecursive(a-1);
    printf("%d\n",a);
    
}
int main(){
    printf("Hello world\n");
    printrecursive(5);
    return 0;
}
//