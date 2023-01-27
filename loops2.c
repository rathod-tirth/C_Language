#include <stdio.h>

void main()

{   
    // for loop and while loop are entry controlled loop

    // do while loop is exit controlled loop

    // for loop is more compact than while loop

    // 1-10

    for(int i=1; i<11; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    // 10-1

    for(int i=10; i>0; i--)
    {
        printf("%d ", i);
    }

    printf("\n\n");

    // 11-20

    {
        int i=11;
        while (i<21)
        {
            printf("%d ", i);
            i++;
        }
        
    }

    printf("\n\n");

    // while loop

    //20-11

    {
        int i=20;
        while (i>10)
        {
            printf("%d ", i);
            i--;
        }
        
    }

    printf("\n\n");

    int j=21;
    int k=30;
    
    // do while

    // 21-30

    do
    {
        printf("%d ", j);
        j++;
    } while (j<31);

    printf("\n\n");
    
    // 30-21

    do
    {
        printf("%d ", k);
        k--;
    } while (k>20);    
}
