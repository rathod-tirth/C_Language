// Identify the vowels

#include <stdio.h>

int main()

{
	char str[100];
	int i,k,cat=0,dog=0;
	
	printf("Write a sentence : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			cat++;
		}	else if(str[i]!=' ')
		{	
			dog++;
		}
	}
	
	printf("\nNo. of vowels in your sentence : %d\n",cat);
	printf("No. of consonant in your sentence : %d",dog);
	
	return 0;
}











