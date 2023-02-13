//Password

#include <stdio.h>

void main()

{
    char password[10]="tirth";
    char input[10];
	int i, z;

    printf("Enter the Password : ");
    scanf("%s", &input);
    
    z=strcmp(password,input);
	
	if(z==0)
	{
		printf("\nACCESS GRANTED\n");
	}	else if(z==1)
	{
		printf("\nACCESS DENIED\n");
	}	else
	{
		printf("\nERROR\n");
	}
}









