#include <stdio.h>

void main()

{
    int a;

    printf("Enter Number betweeen 1-50 : ");
    scanf("%d", &a);

    if (a<0 || a>50)
    {
        printf("WORNG INPUT");
    }   else if (a>0 && a<26)
    {
        printf("%d is 0-25", a);
    }   else if (a>=26 && a<50)
    {
        printf("%d is 26-50", a);
    }
}