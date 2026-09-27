#include <stdio.h>
int main()
{
    int n, count, prime_count = 0, i = 2;
    printf("Enter number of prime numbers to be printed:");
    scanf("%d", &n);
    printf("The first %d prime numbers are:", n);
    while (prime_count < n)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", i);
            prime_count++;
        }
        i++;
    }
    return 0;
}