#include <stdio.h>

void main()

{
    int code[5]={5,4,3,2,1};
    int input[5];

    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Code : ");
        scanf("%d", &input[i]);
    }
    for (int t = 0; t < 5; t++)
    {
        if (code[t]!=input[t])
        {
            printf("\nACCESS DENIED\n");

            break;
        }
        if (code[4]==input[4])
        {
            printf("\n ACCESS GRANTED\n");

            break;
        }
    }  
}   