#include <stdio.h>

int main() {

    float amount,dm,fm;
    int dp;
    scanf("%f",&amount);
    if(amount >= 20000)
    {
        dp = 20;
        dm = amount * 0.2;
        fm = amount - dm;
        printf("Total Purchase Price = Rs %.2f\nDiscount Percentage = %d%\nDiscount Amount = Rs %.2f\nFinal Amount = Rs %.2f",amount,dp,dm,fm);
    }
    else if(amount >= 15000)
    {
        dp = 15;
        dm = amount * 0.15;
        fm = amount - dm;
        printf("Total Purchase Price = Rs %.2f\nDiscount Percentage = %d%\nDiscount Amount = Rs %.2f\nFinal Amount = Rs %.2f",amount,dp,dm,fm);
    }
    else if(amount >= 10000)
    {
        dp = 10;
        dm = amount * 0.1;
        fm = amount - dm;
        printf("Total Purchase Price = Rs %.2f\nDiscount Percentage = %d%\nDiscount Amount = Rs %.2f\nFinal Amount = Rs %.2f",amount,dp,dm,fm);
    }
    else
    {
        printf("No Discount Applicable");
    }
    return 0;
}