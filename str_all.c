// Identify no. of vowels, consonant, uppercase letters, lowecase letters, digits, spaces

#include <stdio.h>

int main()

{
	char str[100];
	int i,k,cat=0,dog=0,cow=0,ant=0,fish=0,rat=0;
	
	printf("Write a sentence : ");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			ant++;
			
			if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
			{
				cat++;
			}	else if(str[i]!=' ')
			{		
				dog++;
			}
		}	else if(str[i]>='a' && str[i]<='z')
		{
			fish++;
			
			if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			{
				cat++;
			}	else if(str[i]!=' ')
			{		
				dog++;
			}
		}	else if(str[i]>='0' && str[i]<='9')
		{
			cow++;
		}	else
		{
			rat++;
		}
	}
	
	printf("\nNo. of vowels in your sentence : %d\n",cat);
	printf("No. of consonant in your sentence : %d\n",dog);
	printf("No. of uppercase letters in your sentence : %d\n",ant);
	printf("No. of lowercase letters in your sentence : %d\n",fish);
	printf("No. of digits in your sentence : %d\n",cow);
	printf("No. of spaces in your sentence : %d",rat);
	
	return 0;
}











