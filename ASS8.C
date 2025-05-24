#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5],b[3][3],c[3][3],sum[3][3];
	clrscr();
	printf("\nEnter 1D Array element:\n");
	printf("\n*************************\n");
	for(i=1;i<=5;i++)
	{
		printf("\nEnter %d row element:",i);
		scanf("%d",&a[i]);
	}
	printf("\n*************************\n");
	printf("\n1D array elements is:\n");
	for(i=1;i<=5;i++)
	{
		printf("\n%d",a[i]);
	}

	printf("\n*************************\n");
	printf("\nEnter 2D array elements B:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&b[i][j]);

		}
	}
	printf("\n*************************\n");
	printf("\nEnter 2D array elements C:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&c[i][j]);

		}
	}
	printf("\n*************************\n");
	printf("\nSum of 2D array elements:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=b[i][j]+c[i][j];

		}
	}
	printf("\n*************************\n");


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",sum[i][j]);

		}
		printf("\n");
	}



	getch();
}