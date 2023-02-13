// Funtions and Array Relation

#include <stdio.h>

int add(int n[])
{
	int i, sum=0;
	
	for(i=0; i<=5; i++)
	{
		sum = sum + n[i];	
	}
	
	return sum;
}

int main()

{
	int a[5]={5,2,3,1,9};
	
	printf("Sum : %d",add(a));
	
	return 0;
}






