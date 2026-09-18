/*
Calculate electricity bill:
First 100 units -> ₹2/unit
Next 100 units -> ₹3/unit
Above 200 units -> ₹5/unit
*/
#include<stdio.h>
int main(){
    int units,units1,units2;
    printf("Enter units of electricity used:");
    scanf("%d",&units);
    units1 = units - 100;
    units2 = units - 200;
    if(units > 0 && units <= 100)
    {
        printf("Your electricity bill is Rs.%d",units * 2);
    }
    else if (units1 > 0 && units1 <= 100)
    {
        printf("Your electricity bill is Rs.%d",(200) + (units1 * 3));
        
    }
    else if(units2 > 0)
    {
        printf("Your electricity bill is Rs.%d", (500) + (units2 * 5));

    }
    else
    {
        printf("You entered incorrect elecrticity bill");
    }
    return 0;
}