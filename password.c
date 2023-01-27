#include <stdio.h>

void main()

{
    char password[]="tirth";
    char input[100];

    printf("Enter the Password : ");
    scanf("%s", &input);

    if (password[0]==input[0] && password[1]==input[1] && 
        password[2]==input[2] && password[3]==input[3] && 
        password[4]==input[4])
    {
        printf("\nACCESS GRANTED\n");
    }
    else
    {
        printf("\nACCESS DENIED\n");
    }
    
}