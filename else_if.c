#include <stdio.h>

void main()

{
    int a;

    printf("Enter any number between 1-100 : ");
    scanf("%d", &a);

    if (a>100 || a<0)
    {
        printf("wrong input");
    }   else if (a>80)
    {
        printf("%d is in 81-100", a);
    }   else if (a>60)
    {
        printf("%d is in 61-80", a);
    }    else if (a>40)
    {
        printf("%d is in 41-60", a);
    }    else if (a>20)
    {
        printf("%d is in 21-40", a);
    }    else if (a>0)
    {
        printf("%d is in 1-20", a);
    }    
}