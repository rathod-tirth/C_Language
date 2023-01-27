#include<stdio.h>

void main() 

{
    // multiple number in a single variable
    // elements from sequencial variable like arrays always access using index number.

    int numbers[5] = {9,6,1,0,3};

    // get element from array

    printf("%d ", numbers[0]);

    printf("%d ", numbers[1]);

    printf("%d ", numbers[2]);

    printf("%d ", numbers[3]);

    printf("%d ", numbers[4]);

    // limitless array

    int b[]={1,6,5,4,9,1,6,6,5};

    printf("%d%d%d%d%d%d%d%d",b[0],b[5],b[8],b[2],b[1],b[4],b[7],b[0]);
}