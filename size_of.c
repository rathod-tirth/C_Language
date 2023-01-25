// C Program to print size of
// different data type in C
#include <stdio.h>

int main()
{
	int i=sizeof(int);

	int c= sizeof(char);

	int f=sizeof(float);

	int d=sizeof(double);

	int l=sizeof(long long);

	printf("The size of int data type : %d\n",i );

	printf("The size of char data type : %d\n",c);

	printf("The size of float data type : %d\n",f);

	printf("The size of double data type : %d\n",d);

	printf("The size of long long data type : %d",l);

	return 0;
}
