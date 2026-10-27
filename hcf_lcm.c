#include <stdio.h>
int main()
{
    int a, b, small, i, hcf = 1;
    long lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        small = a;
    }
    else
    {
        small = b;
    }
    for (i = small; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    lcm = (a * b) / hcf;
    printf("The HCF of given two numbers is %d\n", hcf);
    printf("The LCM of given two numbers is %d", lcm);
    return 0;
}