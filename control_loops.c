#include <stdio.h>

void main()

{
    for (int i = 1; i < 11; i++)
    {
        if (i==8)   // loop goes first at if statement every time
        { 
            break;
        }
        printf("%d ", i);
    }

    printf("\n\n");

    for (int i = 1; i < 11; i++)
    {
        if (i==5)
        {
            continue;

            printf("skipped");  // adding anything after the control statement does not gets executed
        }   
        printf("%d ", i);
    } 
}