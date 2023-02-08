#include <stdio.h>

int main()

{
	int i,k;
	
    for (i=1; i<=5; i++)
    {
        for (k=1; k<=i; k++)
        {
            printf(" ");
        }
        for (k=5; k>=i; k--)
        {
        	printf("*");
		}
		printf("\n");
    }
    printf("\n\n");
    for (i=5; i>=1; i--)
    {
    	for (k=1; k<=i; k++)
    	{
    		printf(" ");
		}
		for (k=5; k>=i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
