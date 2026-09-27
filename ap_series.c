#include<stdio.h>

int main(){
    int a1,d,n,a2;
    printf("Enter first term of AP series:");
    scanf("%d",&a1);
    printf("Enter common difference of AP series:");
    scanf("%d",&d);
    printf("Number of terms to be printed in the AP series:");
    scanf("%d",&n);
    printf("The AP series is:\n");
    printf("%d ",a1);
    for(int i = 1; i < n;i++)
    {
        a2 = d + a1;
        printf("%d ",a2);
        a1 = a2;
    }
    return 0;
}