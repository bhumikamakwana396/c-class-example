#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nEnter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
       {
		sum=sum+i;
       }
       printf("\nSum:%d",sum);
       getch();
}