#include <stdio.h>
int main()
{
    int number, duplicate, orginal, digit_count = 0, sum = 0, remainder;
    printf("Enter any number:");
    scanf("%d", &number);
    orginal = number;
    duplicate = number;
    while (duplicate > 0)
    {
        duplicate = duplicate / 10;
        digit_count++;
    }
    while (number > 0)
    {
        remainder = number % 10;
        int power = 1;
        for(int i = 1;i <= digit_count;i++)
        {
            power = power * remainder;
        }
        sum += power;
        number = number / 10;
    }
    if (orginal == sum)
    {
        printf("Given number is an Armstrong Number");
    }
    else
    {
        printf("Given number is not an Armstrong Number");
    }
    return 0;
}