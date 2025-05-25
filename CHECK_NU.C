#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\nEnter n:");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("\n%d is Even Number",n);
	}
	else
	{
		printf("\n%d is odd number",n);
	}

	printf("\n**************************\n");

	if(n>0)
	{
		printf("\%d is positive number",n);
	}
	else if(n<0)
	{
		printf("\n%d is negative number",n);
	}
	else
	{
		printf("\n%d is Zero",n);
	}

	printf("\n*****************************\n");

	if(n%3==0 && n%5==0)
	{
		printf("\n%d is multiple of Both 3 & 5",n);
	}
	else
	{
		printf("\n%d is not multiple of Both 3 & 5",n);
	}
	getch();
}