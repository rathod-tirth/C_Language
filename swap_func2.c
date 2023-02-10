//Swap Function : Call by Reference

#include <stdio.h>

void swap(int *p, int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	int a,b;
	
	printf("Enter 1 value : ");
	scanf("%d",&a);
	
	printf("Enter 2 value : ");
	scanf("%d",&b);
	
	printf("\nBefore swap : a=%d and b=%d\n",a,b);
	
	swap(&a,&b);
	
	printf("After swap : a=%d and b=%d",a,b);

	return 0;
}











