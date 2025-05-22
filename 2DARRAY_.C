#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	printf("\nEnter array element of array A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n*******************************\n");
	printf("\nEnter elements of array B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n*******************************\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];

		}
	}

	printf("\n*******************************\n");
	printf("\nArray A elements is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\ta[%d][%d]:%d",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n*******************************\n");
	printf("\nArray B elements is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tb[%d][%d]:%d",i,j,b[i][j]);
		}
		printf("\n");
	}
	printf("\n*******************************\n");
	  printf("\nSum Of Array A & B  elements is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}

	getch();
}
