#include <stdio.h>

void main()

{
    printf("\n");

    for (int i = 1; i < 11; i++)

    if (i<10)
    {
        if (2*i<10)
        {
            printf("%d x 0%d = 0%d\n", 2, i, 2*i);
        }   else
        {
            printf("%d x 0%d = %d\n", 2, i, 2*i);
        }
    }   else
    {
        printf("%d x %d = %d\n", 2, i, 2*i);
    }        
}