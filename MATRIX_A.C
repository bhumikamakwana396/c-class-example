#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[3][3],b[3][3],c[3][3],k;
	clrscr();

	printf("\nEnter Array elemets A\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n************************\n");
	printf("\nEnter Array elemets B\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n*************************\n");
	printf("\nSum of Array elemets A & B is\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}


	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}

	printf("\n***************************\n");
	printf("\nEnter Array elemets A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Array elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter %d row & %d column:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	printf("\nMultiplication of Array elemets A&B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
