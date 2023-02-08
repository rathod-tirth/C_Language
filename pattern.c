#include <stdio.h>

int main()

{
	int i,k;
	
    for (i=1; i<6; i++)
    {
        for (k=0; k<i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    for (i=5; i>0; i--)
    {
    	for (k=0; k<i; k++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	return 0;
}
