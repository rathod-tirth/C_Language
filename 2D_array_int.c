#include <stdio.h>

void main()

{
    int a[2][2]={{1,2},{3,4}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c[2][5]={};

    printf("%d %d %d %d\n\n", a[0][0], a[0][1], a[1][0], a[1][1]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}