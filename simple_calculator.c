#include<stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);
    switch(ch)
    {
        case '+':printf("Addition of %d and %d is %d", a, b, a+b);
        break;
        
        case '-':printf("Subtraction of %d and %d is %d", a, b, a-b);
        break;

        case '*':printf("Multiplication of %d and %d is %d", a, b, a*b);
        break;

        case '/':printf("Division of %d and %d is %d", a, b, a/b);
        break;

        case '%':printf("Modulus of %d and %d is %d", a, b, a%b);
        break;
        
        default:printf("You entered incorrect operator");
        break;
    }
    return 0;
}