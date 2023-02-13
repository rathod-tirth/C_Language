// Reversing of Characters

#include <stdio.h> 
#include <string.h>

int main()

{
	char str[100], temp[100];
	int k, i=0, z;
	
	printf("Write a sentece : ");
	gets(str);
	
	k=strlen(str);
	
	z=k-1;
	
	while(i<k/2)
	{
		temp[i]=str[i];
		
		str[i]=str[z-i];
	
		str[z-i]=temp[i];
		
		i++;	
	}
	
	printf("Reverse : %s",str);
	
	return 0;
}

/* 	
	1. abcd
	2. dbca
	3. dcba

	str[5]="abcd", temp[5];

	temp[0]=str[0];
	temp[1]=str[1];
	
	str[0]=str[3];
	str[1]=str[2];
	
	str[3]=temp[0];
	str[2]=temp[1];
*/




