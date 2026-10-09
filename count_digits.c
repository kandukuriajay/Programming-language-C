#include<stdio.h>
int main(){
    int n,count = 0;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n != 0){
        n /= 10;
        count += 1;
        }
    
    printf("There are %d digits in given number",count);
    return 0;
}