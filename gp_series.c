#include<stdio.h>

int main(){
    int a1,r,n,a2;
    printf("Enter first term of GP series:");
    scanf("%d",&a1);
    printf("Enter common ratio of GP series:");
    scanf("%d",&r);
    printf("Number of terms to be printed in the GP series:");
    scanf("%d",&n);
    printf("The GP series is:\n");
    printf("%d ",a1);
    for(int i = 1;i < n;i++)
    {
        a2 = r * a1;
        printf("%d ",a2);
        a1 = a2;
    }
    return 0;
}