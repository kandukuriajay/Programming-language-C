#include <stdio.h>

int main() {

    int s1,s2,s3;
    printf("Enter three sides of a triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if((s1 * s1) == (s2 * s2) + (s3 * s3))
    {
        printf("Yes, The given sides form a right angled triangle and it's hypotenuse is %d",s1);
    }
    else if((s2 * s2) == (s1 * s1) + (s3 * s3))
    {
        printf("Yes, The given sides form a right angled triangle and it's hypotenuse is %d",s2);
    }
    else if((s3 * s3) == (s1 * s1) + (s2 * s2))
    {
        printf("Yes, The given sides form a right angled triangle and it's hypotenuse is %d",s3);
    }
    else
    {
        printf("No, The given sides doesn't form a right angled triangle");
    }
    return 0;
}