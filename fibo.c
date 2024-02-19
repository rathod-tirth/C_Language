#include <stdio.h>

int main()
{

   int num, n1 = 0, n2 = 1;

   printf("Enter num : ");
   scanf("%d", &num);

   for (int i = 0; i < num; i++)
   {
      n1 = (n1 + n2) + n2;
      n2 = n1 - n2;
      n1 = n1 - n2;
   }

   printf("Fibonacci : %d", n1);

   return 0;
}