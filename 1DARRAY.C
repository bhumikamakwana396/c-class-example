#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[3],sum=0;
	clrscr();
	printf("\nEnter array elements\n");
	for(i=0;i<3;i++)
	{
		printf("\nEnter %d element:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n******************\n");
	printf("\nSum=%d",sum);
	printf("\n******************\n");
	printf("\nArray elements are\n");

	for(i=0;i<3;i++)
	{
		printf("\na[%d]:%d",i,a[i]);
	}
	getch();
}