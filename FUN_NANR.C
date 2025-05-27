#include<stdio.h>
#include<conio.h>

void pattern()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void main()
{
	clrscr();
	pattern();
	getch();
}