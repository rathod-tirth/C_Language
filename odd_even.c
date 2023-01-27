#include <stdio.h>

void main() {
    // check whether a number even or odd

    int a;

    printf("Enter Number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is even", a);
    } else {
        printf("%d is odd", a);
    }
}