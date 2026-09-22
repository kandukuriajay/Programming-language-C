#include <stdio.h>

int main()
{
    int n, f1 = 0, f2 = 1, f3;
    printf("Enter the index of fibonacci series:");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
    }
    printf("The term at the index %d is %d", n, f3);
    return 0;
}