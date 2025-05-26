#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,count,j;
	clrscr();
	printf("\nEnter n:");
	scanf("%d",&n);

		for(i=2;i<=n;i++)
		{
			count=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				printf("\nPrime number:%d",i);
			}
		}
	getch();
}