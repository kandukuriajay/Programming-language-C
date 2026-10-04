#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10];
    int a, q;
    printf("Menu:\nb = Burger\nf = French Fries\np = Pizza\ns = Sandwiches\n");
    printf("Enter your choice using first letters as (b,f,s,p):");
    scanf("%s", ch);
    strlwr(ch);
    switch (ch[0])
    {
    case 'b':
        printf("your order is burger\nplease enter quantity ");
        scanf("%d", &q);
        a = q * 200;
        printf("your total charges is:%d", a);
        break;

    case 'f':
        printf("your order is french fries\nplease enter quantity ");
        scanf("%d", &q);
        a = q * 50;
        printf("your total charges is:%d", a);
        break;

    case 'p':
        printf("your order is pizza\nplease enter quantity ");
        scanf("%d", &q);
        a = q * 500;
        printf("your total charges is:%d", a);
        break;

    case 's':
        printf("your order is sandwich\nplease enter quantity ");
        scanf("%d", &q);
        a = q * 150;
        printf("your total charges is:%d", a);
        break;

    default:
        printf("Sorry, your order is not available,visit another restaurant");
        break;
    }
    return 0;
}