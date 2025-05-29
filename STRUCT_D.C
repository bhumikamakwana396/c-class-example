#include<stdio.h>
#include<conio.h>

struct Date
{
	int d,m,y;
};

void main()
{
	struct Date d[2];
	int i;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("\nEnter day for d:");
		scanf("%d",&d[i].d);
		printf("\nEnter month for m:");
		scanf("%d",&d[i].m);
		printf("\nEnter year for y:");
			scanf("%d",&d[i].y);

	}
	for(i=0;i<2;i++)
	{
		printf("\nDate is :%d - %d - %d",d[i].d,d[i].m,d[i].y);
	}
		if(d[0].y < d[1].y)
		{
			printf("\n\nDate 1 is earily");
		}
		else if(d[0].y > d[1].y)
		{
			printf("\n\nDate 2 is earily");
		}
		else if(d[0].m < d[1].m)
		{
			printf("\n\nDate 1 is earily");
		}
		else if(d[0].m > d[1].m)
		{
			printf("\n\nDate 2 is earily");
		}
		else if(d[0].d < d[1].d)
		{
			printf("\n\nDate 1 is earily");
		}
		else
		{
			printf("\n\nDate 2 is earily");
		}
	getch();
}
