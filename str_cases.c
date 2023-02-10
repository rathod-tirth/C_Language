// Identify no. of uppercase and lowercase letters

#include <stdio.h>

int main()

{
	char str[100];
	int i,cat=0,dog=0;
	
	printf("Write a sentence : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			cat++;
		}	
		
		else if(str[i]>='a' && str[i]<='z')
		{
			dog++;
		}
	}
	
	printf("\nNo. of uppercase letters : %d\n",cat);
	printf("No. of lowercase letters : %d",dog);

	return 0;
}
