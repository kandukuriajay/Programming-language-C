#include <stdio.h>
int sum_number(int);
int main()
{
    int n, s = 0, i = 1,result;
    printf("Enter n value:");
    scanf("%d", &n);
    while (i <= n)
    {
        s += i;
        i++;
    }
    result = sum_number(s);
    printf("The sum of numbers from 1 to %d is %d", n, s);
    return 0;
}
int sum_number(int a)
{
    return a;
}
