#include <stdio.h>

void main()

{
    int num[5]={5,10,6,2,8};

    for (int i = 1; i < 11; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (i<10)
            {    
                printf("%d x 0%d = %d\t", num[k], i, num[k]*i);
            }   else
            {
                printf("%d x %d = %d\t", num[k], i, num[k]*i);
            }
        }
        printf("\n");
    }  
}