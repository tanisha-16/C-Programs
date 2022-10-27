#include <stdio.h>
int main() {
    float a, b;
    printf("enter the total no. of classes held.\n");
    scanf("%f", &a);
    printf("enter the no. of classes attended.\n");
    scanf("%f", &b);
    if((b/a) * 100 < 75) {
        printf("your attendance is less than 75%.\n");
    }
    else 
    {
        printf("your attendance is greater than 75%.\n");
    }
    return 0;
}    