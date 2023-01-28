#include <stdio.h>

void main()

{
    int a[5]={7,6,1,4,15};

    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a[0], i, i*a[0]);
    }
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a[1], i, i*a[1]);
    }
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a[2], i, i*a[2]);
    }
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a[3], i, i*a[3]);
    }
    printf("\n");
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", a[4], i, i*a[4]);
    }      
}