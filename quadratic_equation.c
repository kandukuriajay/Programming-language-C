#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float d = ((b * b) - (4 * a * c));
    float root1 = ((-b) + pow(d,0.5)) / ((2 * a));
    float root2 = ((-b) - pow(d,0.5)) / ((2 * a));
    if(d > 0)
    {
        printf("The roots are %.2f and %f.2",root1,root2);
    }
    else
    {
        printf("Imaginary roots");
    }
    return 0;
}