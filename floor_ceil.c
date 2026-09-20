#include <stdio.h>
int main()
{
    double n;
    printf("Enter any number:");
    scanf("%lf",&n);
    int floor,ceil,x;
    x = (int)n;
    if(n >= 0)
    {
        floor = x;
        ceil = x + 1;
        
        if(n == x)
        {
            floor = x;
            ceil = x;
        }
        printf("Floor value is %d\nCeil value is %d",floor,ceil);
    }
    else
    {
        floor = x - 1;
        ceil = x;

        if(n == x)
        {
            floor = x;
            ceil = x;
        }
        printf("Floor value is %d\nCeil value is %d",floor,ceil);
    }
    return 0;
}