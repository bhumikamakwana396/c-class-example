#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();2
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\nEnter B:");
	scanf("%d",&b);
	printf("\nEnter C:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\na is max num");
		}
		else
		{
			printf("\nc is max num");
		}
	}
	else if(b>c)
	{
		printf("\nb is max num");
	}
	else
	{
		printf("\n c is max num");
	}
	getch();
}
