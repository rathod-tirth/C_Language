#include <stdio.h>

void main()

{
    int a;
    int b;

    printf("Enter First number : ");
    scanf("%d", &a);

    printf("Enter Second number : ");
    scanf("%d", &b);

    printf("\nFalse[0] and True[1]\n\n");

    printf("%d = %d is %d\n", a, b, a==b);

    printf("%d != %d is %d\n", a, b, a!=b);

    printf("%d > %d is %d\n", a, b, a>b);

    printf("%d >= %d is %d\n", a, b, a>=b);

    printf("%d < %d is %d\n", a, b, a<b);

    printf("%d <= %d is %d\n", a, b, a<=b);

}