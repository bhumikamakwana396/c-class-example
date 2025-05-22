#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\na is Even Number");
	}
	else
	{
		printf("\na is Odd Number");
	}
	getch();
}