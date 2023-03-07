// printing reverse string


#include <stdio.h>
#include <string.h>

void main()

{
	char str[30]="Hello my name is Tirth Rathod";
	int i, len;
	
	len=strlen(str);
	
	for(i=len; i>=0; i--)
	{
		printf("%c",str[i]);
	}
}
