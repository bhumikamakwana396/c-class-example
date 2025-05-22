#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\nEnter a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\na is Positive Number");
	}
	else
	{
		printf("\na is Negative Number");
	}
	getch();
}