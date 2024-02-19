#include <stdio.h>

int main()
{

   int num, count = 0;

   printf("Enter num : ");
   scanf("%d", &num);

   for (int i = 2; i < num / 2; i++)
   {
      if (num % i == 0)
      {
         count += 1;
         printf("%d is not a Prime number", num);
         break;
      }
   }

   if (count == 0)
   {
      printf("%d is Prime number", num);
   }

   return 0;
}
