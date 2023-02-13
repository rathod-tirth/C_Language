// strcat add one string with another

#include <stdio.h>
#include <string.h>

int main()

{
	char first[20]="tirth", last[20];
	
	printf("Enter First Name : ");
	gets(first);
	
	printf("Enter Last Name : ");
	gets(last);
	
	printf("Your full name : %s",strcat(first,last));
	
	return 0;
}






