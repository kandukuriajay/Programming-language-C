#include<stdio.h>
int main(){
    int s,i,j;
    printf("Enter side of square:");
    scanf("%d",&s);
    for(i = 1;i <= s;i++)
    {
        for(j = 1;j <= s; j++)
        {
            if(i == 1 || j == 1 || i == s || j == s)
            {
                printf("* " );
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}