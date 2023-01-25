#include<stdio.h>

void main() {
    // operators

    // 1. Arithmetic: +, -, *, /, %

    int a = 2;
    int b = 8;
    float c=10;
    float d=5;

    printf("%d + %d = %d\n\n", a, b, a+b);

    printf("%d - %d = %d\n\n", a, b, a-b);

    printf("%d * %d = %d\n\n", a, b, a*b);

    printf("%d / %d = %d\n\n", b, a, b/a);

    printf("%.1f / %.1f = %.2f\n\n", d, c, d/c);

    printf("remainder of %d / %d is %d\n\n", b, a, b%a);

    //printf("remainder of %f / %f is %f\n\n", d, c, d%c); is invalid

    // you cannot use modulus(%) with float values

    printf("%d + %d - %.1f / %.1f * %d + %d + %d - %.1f = %.1f",a,b,d,c,b,b,a,c,a+b-d/c*b+b+a-c);

}