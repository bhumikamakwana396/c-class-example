#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,limit;
	clrscr();
	printf("\nEnter n:");
	scanf("%d",&n);
	printf("\nEnter limit ti multiplication of table:");
	scanf("%d",&limit);

	for(i=1;i<=limit;i++)
	{
		printf("\n%d * %d =%d",n,i,i*n);
	}
	getch();
}