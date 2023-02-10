// Ifentify the length of the string 

#include <stdio.h>

int main()

{
	char str[20];
	
	printf("Enter your name : ");
	gets(str);
	
	int i,cat=0;
	
	for(i=0; str[i]!='\0'; i++)
	{
		cat++;
	}
	printf("Length of Your Name is %d\n",cat);
	
	return 0;
}
