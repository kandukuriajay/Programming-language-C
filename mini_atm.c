#include<stdio.h>
int main()
{
    /* Mini ATM:
    Balance = ₹10,000
    User enters withdrawal amount.
    If amount is greater than balance → Print "Insufficient Balance".
    Otherwise deduct and print remaining balance.
    */

    int total_amount = 10000,withdrawal_amount;

    printf("Enter withdrawal amount:");
    scanf("%d",&withdrawal_amount);

    if (withdrawal_amount <= total_amount){
        printf("Transaction successful\nYour remaining balance is Rs.%d", total_amount - withdrawal_amount);
    }
    else{
        printf("Insufficient balance");
    }

    return 0;
}