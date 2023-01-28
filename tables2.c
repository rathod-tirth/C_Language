#include <stdio.h>

void main()

{
    for ( int a = 1; a < 6; a++)
    {
        for (int i = 1; i < 11; i++)
        {
            printf("%d x %d = %d\n", a, i, a*i);
        }
        printf("\n");
    }    
}