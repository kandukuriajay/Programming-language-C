#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a and b values:\n");
    scanf("%d%d",&a,&b);
    printf("Initial values of a and b are\na = %d and b = %d\n",a,b);
    a =  a + b;
    b = a - b;
    a = a - b;
    printf("The swapped values of a and b are\na = %d and b = %d",a,b);
    return 0;
}