#include <stdio.h>

void main()

{
    int a[]={15,30,12,24,25};
    int b;

    printf("\n[15,30,12,24,25]\n\n");

    printf("Enter value from [0,1,2,3,4] : ");
    scanf("%d", &b);

    printf("\n");

    if (b<0 || b>4)
    {
        printf("\nWRONG INPUT\n");
    }   else if (b<1)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", a[0], i, a[0]);
        }   
    }   else if (b<2)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", a[1], i, a[1]);
        }
    }   else if (b<3)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", a[2], i, a[2]);
        }
    }   else if (b<4)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", a[3], i, a[4]);
        }
    }   else if (b<5)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", a[4], i, a[4]);
        }
    }
}