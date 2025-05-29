#include<stdio.h>
#include<conio.h>

struct Rectangle
{
	float l;
	float w;
};

void main()
{
	struct Rectangle r;
	float area,perimeter;
	clrscr();

	printf("\nEnter Length:");
	scanf("%f",&r.l);
	printf("\nEnter width:");
	scanf("%f",&r.w);

	area = r.l*r.w;
	perimeter = 2*(r.l+r.w);

	printf("\nArea of rectangle is: %.2f",area);
	printf("\nPerimeter of rectangle is: %.2f",perimeter);
	getch();

}

