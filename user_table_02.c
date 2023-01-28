#include <stdio.h>

void main()

{
    int a;

    printf("\n");

    printf("Enter any Number : ");
    scanf("%d", &a);

    for (int i = 1; i < 11; i++)

    {
    if (i<10)
    {
        if (a*i<10)
        {
            printf("%d x 0%d = 0%d\n", a, i, a*i);
        }   else
        {
            printf("%d x 0%d = %d\n", a, i, a*i);
        }
    }   else
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
    }        
}