#include <stdio.h>

void main()

{
    printf("\n");

    for (int i = 1; i < 11; i++)
    {
        if (i<10)
        {  
            printf("%d x 0%d ", 2, i);    
        }   else
        {
            printf("%d x %d ", 2, i);
        }        
        if (2*i<10)
        {
            printf("= 0%d\n", 2*i);
        }   else
        {
            printf("= %d\n", 2*i);
        }    
    }     
}