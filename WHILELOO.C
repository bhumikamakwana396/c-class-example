#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	clrscr();
	printf("\Enter N:");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n;
		n--;
	}
	printf("\nSum=%d",sum);
	getch();
}