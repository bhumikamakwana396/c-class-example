#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[5],temp;
	clrscr();
	printf("\nEnter array elements\n");
	printf("\n******************\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d row element:",i);
		scanf("%d",&a[i]);
	}
	printf("\n******************\n");
	printf("\nBefore Array of A elements is\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}
	printf("\n******************\n");
	printf("\nAfter Array of A is Ascending order\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}


	for(i=0;i<5;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}
	printf("\n******************\n");
	printf("\nAfter Array of A is Desending order\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n******************\n");

	for(i=0;i<5;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}

	getch();
}