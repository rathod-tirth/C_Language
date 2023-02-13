// Palindrom or not

#include <stdio.h>
#include <string.h>

int main()

{
	char str[10], temp[10], str1[10];
	int k, i=0, z;
	
	printf("Write a string : ");
	gets(str);
	
	strcpy(str1,str);
	
	k=strlen(str);
	
	z=k-1;
	
	while(i<k/2)
	{
		temp[i]=str[i];
		
		str[i]=str[z-i];
	
		str[z-i]=temp[i];
		
		i++;	
	}
	
	if(strcmp(str,str1)==0)
	{
		printf("String is Palidrom");
	}	else
	{
		printf("String is not Palidrom");
	}
	
	return 0;	
}









