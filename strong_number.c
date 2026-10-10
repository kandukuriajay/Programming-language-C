// Example:145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 ==> Strong number
#include <stdio.h>
int main()
{
    int n, r, i, f = 1, sum = 0, original;
    printf("Enter security code:");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        r = n % 10;
        i = 1;
        while (r >= i)
        {
            f = f * i;
            i++;
        }
        sum = sum + f;
        n = n / 10;
        f = 1;
    }
    if (original == sum)
    {
        printf("Yes, given number is a strong number");
    }
    else
    {
        printf("No,the given number is not a strong number");
    }
    return 0;
}