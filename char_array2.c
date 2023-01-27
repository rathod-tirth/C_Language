#include <stdio.h>

void main()

{
    char name[6]="Tirth";                      // don't write like this {'T','i','r','t','h'}

    printf("%c%c%c%c%c\n", name[0], name[1], name[2], name[3], name[4]);
    printf("%s\n", name);

    char city[100];

    printf("Enter City : ");
    scanf("%s", &city);

    printf("%c\n", city[0]);

    printf("%c\n", city[10]);

    printf("%s\n", city);

    char limit[]="Thiruvamthampuram";

    printf("%s", limit);

}