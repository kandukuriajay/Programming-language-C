#include <stdio.h>

int main()
{
    int n, r, pro = 1;
    printf("Enter number:");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        pro = pro * r;
        n = n / 10;
    }
    printf("The product of the individual digits is %d", pro);
    return 0;
}