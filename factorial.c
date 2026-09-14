#include<stdio.h>
int main(){
    int n,f = 1;
    printf("Enter number (n > 0):");
    scanf("%d",&n);
    while(n > 0)
    {
        f *= n;
        n--;
    }
    printf("The factorial of given number is %d",f);
    return 0;
}