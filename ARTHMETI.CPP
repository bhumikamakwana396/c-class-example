#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\enter A:");
	scanf("%d",&a);
	printf("\enter B:");
	scanf("%d",&b);
	c=a+b;
	printf("\nAddition:%d",c);
	c=a-b;
	printf("\nSubstraction:%d",c);
	c=a*b;
	printf("\nMultiplication:%d",c);
	c=a/b;
	printf("\nDivision:%d",c);
	getch();
}