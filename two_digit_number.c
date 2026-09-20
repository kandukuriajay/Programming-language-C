#include<stdio.h>
int main(){
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    if(number >= 10 && number <= 99)
    {
        printf("Yes,%d is a two digit positive number",number);
    }
    else if(number <= -10 && number >= -99)
    {
        printf("Yes,%d is a two digit negative number",number);
    }
    else
    {
        printf("%d is not a two digit number",number);
    }
    return 0;
}