#include <stdio.h>

void main()

{
    int a=3647;
    // int and long has same range

    long long b=65165646565165;
    // use %lld 

    float c=2.6365;
    // use %f and %.f for digits after decimal

    int d=656;
    // use %u for unsigned int

    double e=352.4446;
    // use %lf

    char f='s';
    // use %c

    char g[5]="goat";

    printf("\nint = %d\n", a);

    printf("long long = %lld\n", b);

    printf("float = %.4f\n", c);

    printf("unsigned int = %u\n", d);

    printf("double = %.4lf\n", e);
    
    printf("char = %c\n", f);

    printf("string = %s\n", g);
}
