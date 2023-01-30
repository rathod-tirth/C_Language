#include <stdio.h>

void main()

{
    int age ;

    printf("Enter Your Age : ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf("Adult\n");
    }   else if (age>12)
    {
        printf("Tennager\n");
    }   else
    {
        printf("Child\n");
    }
}