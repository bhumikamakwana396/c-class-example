#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0,i,d,r=0;
	clrscr();
	printf("\nEnter N:");
	scanf("%d",&n);


	while(n!=0)
	{
		d=n%10;
		sum=sum+d;
		r=r*10+d;
		n=n/10;
	}
	printf("\nSum=%d",sum);
	printf("\nReverse Number is:%d",r);

	getch();
}