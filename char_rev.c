// Reversing of Characters

#include <stdio.h> 
#include <string.h>

int main()

{
	char str[100], temp;
	int k, i=0, z;
	
	printf("Write a sentece : ");
	gets(str);
	
	k=strlen(str);
	
	z=k-1;
	
	while(i<k/2)
	{
		temp=str[i];
		
		str[i]=str[z-i];
	
		str[z-i]=temp;
		
		i++;	
	}
	
	printf("Reverse : %s",str);
	
	return 0;
}

/*
 	
>>	Logic of reversing of string

	1. abcd
	2. dbca
	3. dcba

	str[5]="abcd", temp;
	
>>	Since there only one character checked at a time, no need for array in temp

	temp=str[0];
	temp=str[1];
	
	str[0]=str[3];
	str[1]=str[2];
	
	str[3]=temp;
	str[2]=temp;
	
>>	To access the array from the end

	a="hello"
	
	strlen(a)=k=5
	
	k-1 = 4		a[4]='o'
	
>>	Length of the array -1 is last index number of that array
	
*/




