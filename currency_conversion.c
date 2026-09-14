#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter money in rupees:");
    scanf("%f",&inr);
    usd = inr / 85;  //1 USD = 85 INR
    printf("The money in US Dollar is %.3f",usd);
    return 0;
}