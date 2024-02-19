#include <stdio.h>

int findfibo(int num, int n1, int n2)
{
   if (num > 0)
   {
      n1 = (n1 + n2) + n2;
      n2 = n1 - n2;
      n1 = n1 - n2;

      return findfibo(num - 1, n1, n2);
   }
   else
   {
      return n1;
   }
}

int main()
{

   int num, n1 = 0, n2 = 1, fibo;

   printf("Enter num : ");
   scanf("%d", &num);

   fibo = findfibo(num, n1, n2);

   printf("Fibonacci : %d", fibo);

   return 0;
}
