#include <stdio.h>

void main()

{
    int a[2][10]={{15,10,17,9,2,3,18,5,4,6},{1,2,3,4,5,6,7,8,9,10}};

    for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                printf("%d x %d = %d\n", a[0][j], a[1][k], a[0][j]*a[1][k]);
            }   
            printf("\n");   
        }
}