#include <stdio.h>
int main()
{
    int n, evensum = 0, oddsum = 0, i;
    printf("Enter number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            evensum = evensum + i;
        }
    }
    printf("Sum of Even Numbers from 1 to %d is: %d", n, evensum);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            oddsum = oddsum + i;
        }
    }
    printf("\nSum of Odd Numbers from 1 to %d is: %d", n, oddsum);
    return 0;
}