#include<stdio.h>
#include<conio.h>

void main()
{
	int r;//declare r variable in integer type
	const float PI=3.14;//declare constatnt variable PI
	float area;//declare area of variable in float type
	char u = 'm';//declare ch in character type variable
	clrscr();

	printf("\nEnter value of r:");
	scanf("%d",&r);

	printf("\n*************************\n");

	area=(PI*r*r);//calculate area of circle


	printf("\n*************************\n");
	printf("\nConstant Values is PI:%.2f",PI);
	printf("\nInteger Value is R:%d %c",r,u);
	printf("\nCircle of Area is:%.2f %c%c",area,u,u);


	getch();
}
