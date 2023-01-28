#include <stdio.h>

void main()

{
    int a;

    printf("\n");

    printf("Enter any Number : ");
    scanf("%d", &a);

    for (int i = 1; i < 11; i++)
    {
        if (i<10)
        {  
            printf("%d x 0%d ", a, i);    
        }   else
        {
            printf("%d x %d ", a, i);
        }        
        if (a*i<10)
        {
            printf("= 0%d\n", a*i);
        }   else
        {
            printf("= %d\n", a*i);
        }   
    }     
}