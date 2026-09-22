#include <stdio.h>

int main()
{
    int n, f1 = 0, f2 = 1, f3;
    printf("Enter number of terms you want to print in the fibonacci series:");
    scanf("%d", &n);
    printf("Fibonacci series is %d %d ", f1, f2);
    for (int i = 2; i < n; i++)
    {
        f3 = f2 + f1;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}