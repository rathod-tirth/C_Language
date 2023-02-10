// Identify no. of digits

#include <stdio.h>

int main()

{
	char str[100];
	int i,cat=0,dog=0;
	
	printf("Write a sentence : ");
	gets(str);

	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='0' && str[i]<='9')	//	its calcutating the ASCII value of the characters
		{
			cat++;
		}	else
		{
			dog++;
		}
	}
	
	printf("\nNo. of char in your sentence is %d\n",dog);
	printf("No. of digits in your sentence is %d",cat);
		
	return 0;
}









