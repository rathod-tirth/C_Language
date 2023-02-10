/*String :

String is a array of characters terminated with null character ['\0']

>> How to declare string :

	char string_ name[size];

>>How to initialization string:

	char str1[]={'a','b','t','\0'};
	
	char str[]="Hello have a nice day!";
	char str[200];
	
	gets(): to scan the string
	
	puts(): to print the string
	
*/

#include <stdio.h>

int main()
{
	char str[]={'h','e','l','l','o'};
	printf("\n%s\n", str);
	
	char str1[]="hello";
	printf(str1);
	
	char str2[20];
	
	printf("\nEnter your name : ");
	gets(str2);
	
	printf("\nName : %s\n", str2);
	puts(str2);

	return 0;
}









