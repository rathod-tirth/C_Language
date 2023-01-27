#include <stdio.h>

void main()

{
    int a=6;
    int b=9;

    printf("\nFalse[0] and True[1]\n\n");

    printf("%d = %d is %d\n", a, b, a==b);

    printf("%d != %d is %d\n", a, b, a!=b);

    printf("%d > %d is %d\n", a, b, a>b);

    printf("%d >= %d is %d\n", a, b, a>=b);

    printf("%d < %d is %d\n", a, b, a<b);

    printf("%d <= %d is %d\n", a, b, a<=b);
}