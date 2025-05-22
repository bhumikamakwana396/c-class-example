#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		for(k=i;k<4;k++)
		{
			printf(" ");
		}
		for(l=i;l<4;l++)
		{
			printf(" ");
		}
		for(m=0;m<=i;m++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}