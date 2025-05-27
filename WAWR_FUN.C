#include<stdio.h>
#include<conio.h>

int sub(int a,int b)
{
	return a-b;
}

void main()
{
	int x,y;
	clrscr();

	printf("\nEnter X:");
	scanf("%d",&x);
	printf("\nEnter Y:");
	scanf("%d",&y);

	printf("\nSubstraction is:%d",sub(x,y));
	getch();
}