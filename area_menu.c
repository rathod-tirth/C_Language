#include <stdio.h>

//Area of Circle, Triangle and Rectangle

void circle()
{
	float r;
	
	printf("\nEnter Radius : ");
	scanf("%f",&r);
	
	printf("\nArea of Circle is %.2f",3.14159*r*r);	
}

void triangle()
{
	float base,alt;
	
	printf("\nEnter Base : ");
	scanf("%f",&base);
	
	printf("Enter Altitude : ");
	scanf("%f",&alt);
	
	printf("\nArea of Triangle is %.2f",0.5*base*alt);
}

void rectangle()
{
	float l,b;
	
	printf("\nEnter Length : ");
	scanf("%f",&l);
	
	printf("Enter Breath : ");
	scanf("%f",&b);
	
	printf("\nArea of Rectangle is %.2f",l*b);
}

int main()
{
	int e;
	
	printf("\n-------MENU-------\n\n1. Area of Circle\n2. Area of Triangle\n3. Area of Rectangle\n\nEnter value : ");
	scanf("%d", &e);
	
	switch (e)
	{
		case 1:
			circle();
			break;
		
		case 2:
			triangle();
			break;
		
		case 3:
			rectangle();
			break;
		
		default :
			printf("\nWrong Input\n");
			break;
	}
}
