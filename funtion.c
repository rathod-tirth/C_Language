/*Function : 

	Function is a block of code where codes are used again and again in a program
	
	>>Why we need to use Fucntions ?
	
	-line of code reduce
	-code reusability
	-can give structure to your program 
	
	>>How to declare a function : 
	
	Syntax  : return_type function_name(parameter/argument);
	
	>>Types Of Function in C: 
	
	1. User defined Functions : we need to create logic for such fucntion
	Ex: my_func(),car(),etc...
	
	2. Inbuilt Functions : are pre-defined in the system
	Ex: printf(),scanf(),clrscr(),main(),gets(),.....etc...
	
	>>Categories of Function : 
	
	1. w/o return type and w/o parameter
	2. w/o return type and with parameter
	3. with return type and w/o parameter
	4. with return type and with parameter
*/

#include <stdio.h>

//1. w/o return type and w/o parameter

//Function declaration

void a()
//Function defination
{
	printf("Hello World\n");
}

//2. w/o return type and with parameter

void b(int m,int n)
{
	printf("%d and %d\n",m,n);
}

//3. with return type and w/o parameter

int c()
{
	return 12;
}

//4. with return type and with parameter

int d(int u, int v)
{
	return u+v;
}

//Function calling
int main()
{
	a();
	
	int p=5,q=11;
	b(p,q);
	
	printf("%d\n",c());
	
	int r=16,s=9;
	printf("%d\n",d(r,s));
	
	return 0;
}







