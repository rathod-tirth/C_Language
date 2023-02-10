// Identify no. of spaces and words

#include <stdio.h>

int main()

{
	char str[100];
	
	printf("Enter a sentence : ");
	gets(str);
	
	int i,cat=0,dog=0;
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		{
			cat++;
		}	else
		{
			dog++;
		}
	}
	
	printf("No. of words used : %d\n",dog);
	printf("No. of spaces used : %d\n",cat);
	
	return 0;
}
