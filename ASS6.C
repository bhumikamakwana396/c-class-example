#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();

	printf("\n*********************\n");
	printf("\nEnter N:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i==5)
		{
			break;
		}
		else if(i==3)
		{
			continue;
		}

			printf("\n%d",i);

	}
	getch();
}

