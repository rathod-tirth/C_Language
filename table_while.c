//	tables using while loop

#include <stdio.h>

int main()

{
	int a,i;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	{
		i=1;
		while (i<=10)
		{
			printf("%d x %d = %d\n",a,i,a*i);
			i++;
		}
	
	}
	
	return 0;
}






