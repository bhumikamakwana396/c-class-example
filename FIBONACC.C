#include<stdio.h>
#include<conio.h>


void fibonacci_series(int n)
{
	int n1=0,n2=1,temp,i;
	printf("\nFibonacci Series Using Iterative Method is\n\n");
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			temp=i;
		}
		else
		{
			temp=n1+n2;
			n1=n2;
			n2=temp;
		}
		printf(" %d",temp);
	}
}

int fibo_se(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)

	{
		return 1;
	}
	else
	{
		return fibo_se(n-1)+fibo_se(n-2);
		}

}


void main()
{
	int x,i;
	clrscr();
	printf("\nEnter n:");
	scanf("%d",&x);
	fibonacci_series(x);
	printf("\n\nFibonacci series using Recursive method\n\n");
	for(i=0;i<x;i++)
	{
		printf(" %d",fibo_se(i));
	}
	getch();

}