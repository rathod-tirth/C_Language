#include <stdio.h>

int main()
{

   int num, rev = 0;

   printf("Enter num : ");
   scanf("%d", &num);

   while (num != 0)
   {
      rev *= 10;
      rev += num % 10;
      num /= 10;
   }

   printf("Reverse : %d", rev);

   return 0;
}