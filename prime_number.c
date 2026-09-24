#include <stdio.h>

int main()
{
    int n, correct = 1;
    printf("Enter number:");
    scanf("%d", &n);
    if (n <= 1)
    {
        correct = 0;
    }
    for (int i = 2; i <= (n - 1); i++)
    {
        if (n % 2 == 0)
        {
            correct = 0;
            break;
        }
    }
    if (correct == 1)
    {
        printf("Yes, %d is a prime number", n);
    }
    else
    {
        printf("No, %d is not a prime number", n);
    }
    return 0;
}