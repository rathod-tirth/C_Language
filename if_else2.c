#include <stdio.h>

void main()

{

//if the "if" statement is not satisfied and their is no "else" statement, then there would be no output 

    int a=5;
    int b=5;

    printf("\n5 equals to 5?\n");

    if (a==b)
    {
        printf("%d = %d\n\n", a, b);
    }

//if both "if" and "else" statement are not satisfied, then there would be no output

    int c=6;
    int d=8;

    printf("6 equals to 8?\n");

    if (c==d)
    {
        printf("%d = %d\n", c, d);   
    }
    else
    {
        printf("%d != %d\n", c, d);
    }
}