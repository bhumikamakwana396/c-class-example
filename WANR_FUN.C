#include<stdio.h>
#include<conio.h>

void add(int a,int b)
{
	printf("\nAddition is:%d",a+b);
}

void main()
{
	int x,y;
	clrscr();
	printf("\nEnter X:");
	scanf("%d",&x);
	printf("\nEnter Y:");
	scanf("%d",&y);

	add(x,y);

	getch();
}