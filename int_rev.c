// Reversing of Numbers

#include <stdio.h>

int main()

{
	long long a, b=0, c=0;
	
	printf("Enter any number : ");
	scanf("%lld",&a);
	
	while(a>0)
	{
		c = a % 10;
		b = b * 10 + c;
		a = a / 10;
	}
	
	printf("Reverse : %lld",b);
	
	return 0;
}

/*
	a=123
	b=0
	c=0
										   
>>	Divinding any number by 10 gives last digit as Remainder and rest as Quotient

>>	a % 10 = c
	
	123 % 10 = 3		
 	12  % 10 = 2 		
	1   % 10 = 1 			
									 			
>>	b * 10 + c = b		
	
	0 * 10 + 3 = 3 		
	3 * 10 + 2 = 32 	
	32 * 10 + 1 = 321   
										   
>>	a / 10 = a			
	
	123 / 10 = 12 	
	12  / 10 = 1 		
	1	/ 10 = 0
		   
	b=321
*/







