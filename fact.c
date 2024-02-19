#include <stdio.h>

int main()
{

   int num, fact = 1;

   printf("Enter num : ");
   scanf("%d", &num);

   for (int i = 1; i <= num; i++)
   {
      fact *= i;
   }

   printf("%d", fact);

   return 0;
}