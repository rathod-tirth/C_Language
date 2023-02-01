#include <stdio.h>

void main()

{
    int a[5]={5,16,7,3,9};

    for (int i=0; i<5; i++)
    {
        for (int k=1; k<11; k++)
        {
            if (k<10)
            {
                printf("%d x 0%d = %d\n", a[i], k, a[i]*k);    
            }   else
            {
                printf("%d x %d = %d\n", a[i], k, a[i]*k);
            }
        }
        printf("----------\n");
    }   
}