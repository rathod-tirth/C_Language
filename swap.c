//Swaping of two numbers

#include <stdio.h>

int main()

{
//	Swaping w/o third variable

	int a=5,b=10;
	
	printf("Before Swap: a=%d and b=%d\n",a,b);
	
	a=a+b;	// a=5+10=15
	b=a-b;	// b=15-10=5
	a=a-b;	// a=15-5=10
	
	printf("After Swap: a=%d and b=%d\n\n",a,b);

//	Swaping with third variable

	int c=22,d=9,temp;
	
	printf("Before Swap: c=%d and d=%d\n",c,d);
	
	temp=c;	// temp=22
	c=d;	// c=9
	d=temp;	// d=22
	
	printf("After Swap: c=%d and d=%d\n",c,d);
		
	return 0;
}
