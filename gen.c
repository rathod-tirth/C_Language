#include <stdio.h>

void main()

{
    int birth;

    printf("Enter Your Birth Year : ");
    scanf("%d", &birth);

    if (birth>=2010)
    {
        printf("You are Gen Alpha");
    }   else if (birth>=1996)
    {
        printf("You are Gen Z");
    }   else if (birth>=1977)
    {
        printf("You are Millennial");
    }   else if (birth>=1965)
    {
        printf("You are Gen X");
    }   else if (birth>=1946)
    {
        printf("You Baby Boomer");
    }   else if (birth>=1920)
    {
        printf("You are Boomer");
    }   else
    {
        printf("You are Dead");
    }
        
}