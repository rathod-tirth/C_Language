//	tables using do while loop

#include <stdio.h>

int main()

{
	int a,i;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	i=1;
	do
	{
		printf("%d x %d = %d\n",a,i,a*i);
		i++;
	}	while(i<=10);
	
	return 0;		
}
