//Swap Function : Call by Value

#include <stdio.h>

void swap(int a, int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swap : %d and %d\n\n",a,b);
}

int main()

{
	int p,q;
	
	printf("Enter 1 value : ");
	scanf("%d",&p);
	
	printf("Enter 2 value : ");
	scanf("%d",&q);
	
	printf("\nBefore swap: p=%d and q=%d\n",p,q);
	
	swap(p,q);
	
	printf("Value in main : p=%d and q=%d",p,q);
	
//	Here, Swapping only occurs in the function thus swaping with call by value is not possible
	
	return 0;
}










