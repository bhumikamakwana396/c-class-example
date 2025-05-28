#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[5],*p;
	clrscr();
	printf("\nEnter array elements\n\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d element:",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];
	printf("\nArray element with their address\n");
	for(i=0;i<5;i++)
	{
	    printf("\na[%d]: %d & Address : %u",i,a[i],p++);
	}
	getch();
}