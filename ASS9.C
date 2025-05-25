#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	int *ptr;
	clrscr();

	printf("\nEnter value for num:");
	scanf("%d",&num);
	ptr=&num;
	printf("\nBefore value is modification:%d",num);
	*ptr=20;
	printf("\nAfter value is modification:%d",num);
	getch();

}

