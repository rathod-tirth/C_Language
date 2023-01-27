#include <stdio.h>

void main()

{
    int a;

    printf("Enter Your Percentage : ");
    scanf("%d", &a);
    
    if (a>100 || a<0)
    {
        printf("WRONG INPUT");
    }   else if (a>=95)
    {
        printf("Grade = A+");
    }   else if (a>=90)
    {
        printf("Grade = A");
    }   else if (a>=85)
    {
        printf("Grade = B+");
    }   else if (a>=80)
    {
        printf("Grade = B");
    }   else if (a>=75)
    {
        printf("Grade = C+");
    }   else if (a>=70)
    {
        printf("Grade = C");
    }   else if (a>=60)
    {
        printf("Grade = D");
    }   else if (a>=50)
    {
        printf("You Passed");
    }   else
    {
        printf("You Failed");
    }   
}