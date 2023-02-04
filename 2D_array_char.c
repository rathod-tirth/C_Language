#include <stdio.h>

void main()

{
    char a[2][2]={{'A','B'},{'C','D'}};
    char b[4][2]={{"EF"},{"GH"},{"IJ"},{"KL"}};
    char c[2][5]={};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
        //  printf("%d ", a[i][j]); prints ascii value of variable

            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%c ", b[i][j]);
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