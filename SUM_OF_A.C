#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum=0,n;
	int a[50];
	float avg;
	clrscr();
	printf("\nEnter N:");
	scanf("%d",&n);
	printf("\nEnter array elemets\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Array:",i);
		scanf("%d",&a[i]);

		sum=sum+a[i];
	}

	printf("\nSum Of array:%d",sum);

	avg=sum/n;
	printf("\nAverage of Array is:%.2f",avg);
	getch();
}