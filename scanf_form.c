#include <stdio.h>

void main()

{
    char name[100];
    int age;
    char city[100];
    
    printf("Enter Your Name : ");
    scanf("%s", &name);

    printf("Enter Your Age : ");
    scanf("%d", &age);

    printf("Enter Your City : ");
    scanf("%s", &city);

    printf("\n");

    printf("Name : %s\n", name);

    printf("Age : %d\n", age);

    printf("City : %s\n", city);
}
