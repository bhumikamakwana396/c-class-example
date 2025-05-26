#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[10],min,max;
	clrscr();
	printf("\nEnter array elements");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d row elements:",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++)
	{
			if(a[i]<min)
			{
				min=a[i];
			}
	}
	max=a[0];
	for(i=0;i<5;i++)
	{

			if(a[i]>max)
			{
				max=a[i];
			}
	}
	printf("\nMimimum value is:%d",min);
	printf("\nMaximum value is:%d",max);
	getch();
}