#include <stdio.h>

void main()

{
    int code[5]={5,4,3,2,1};
    int input[5];

    // writing with array is complex for both input and output side *for code.c

    printf("Enter First Code : ");
    scanf("%d", &input[0]);

    printf("Enter Second Code : ");
    scanf("%d", &input[1]);

    printf("Enter Third Code : ");
    scanf("%d", &input[2]);
    
    printf("Enter Fourth Code : ");
    scanf("%d", &input[3]);
    
    printf("Enter Fifth Code : ");
    scanf("%d", &input[4]);

    if (code[0]==input[0] && code[1]==input[1] && code[2]==input[2] && code[3]==input[3] && code[4]==input[4])
    {
        printf("\nCORRECT\n\n");

        // writing without array is much easier *for code.c
        
        int code2=12345;
        int input2;

        printf("Enter Code : ");
        scanf("%d", &input2);

        if (code2==input2)
        {
            printf("\nACCESS GRANTED\n");
        }
        else
        {
            printf("\nACCESS DENIED\n");
        }
    }
    else
    {
        printf("\nACCESS DENIED\n\n");
    }
}   