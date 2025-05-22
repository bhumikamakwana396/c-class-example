#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\nEnter B:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\na is max number");
	}
	else
	{
		printf("\nb is max number");
	}
	getch();
}