#include <stdio.h>

void main()

{
    char password[6]="tirth";
    char input[6];

    printf("Enter the Password : ");
    scanf("%s", &input);

    for (int i = 0; i <= 4; i++)
    {
        if (password[i]!=input[i])
        {
            printf("\nACCESS DENIED\n");

            break;
        }
        if (password[i]==input[i])
        {     
            if (i==4)
            {
                printf("\nACCESS GRANTED\n");
            }
        }
    }
}