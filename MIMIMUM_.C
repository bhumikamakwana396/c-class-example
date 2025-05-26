#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],min,max,temp,j;
	clrscr();
	printf("\nEnter array elements\n");
	for(i=0;i<10;i++)
	{
		printf("\nEnter %d row elements:",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++)
	{
			if(a[i]<min)
			{
				min=a[i];
			}
	}
	max=a[0];
	for(i=0;i<10;i++)
	{

			if(a[i]>max)
			{
				max=a[i];
			}
	}
	printf("\n*************************\n");
	printf("\nMimimum value is:%d",min);
	printf("\nMaximum value is:%d",max);

	printf("\n*************************\n");

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("\nAfter Array is Ascending Order\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}

	getch();
}