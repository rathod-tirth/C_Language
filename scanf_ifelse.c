#include <stdio.h>

void main()

{
    int a;
    int b;

    printf("Enter First number : ");
    scanf("%d", &a);

    printf("Enter Second number : ");
    scanf("%d", &b);

    if (a==b)
    {
        printf("\n%d = %d\n", a, b);
    }     
    else
    {
        printf("\n%d != %d\n", a, b);       
    }

    if (a>b)    
    {
       printf("%d > %d", a, b);
    }

    if (a<b)
    {
       printf("%d < %d", a, b);
    }
}
