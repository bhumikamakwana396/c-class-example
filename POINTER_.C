#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int x,y;
	clrscr();
	printf("\nEnter X:");
	scanf("%d",&x);
	printf("\nEnter Y:");
	scanf("%d",&y);

	printf("\nBefore values of X & Y is:  %d & %d",x,y);
	swap(&x,&y);

	printf("\n\nAfter Swapping  values of X & Y is:  %d & %d",x,y);
	getch();
}