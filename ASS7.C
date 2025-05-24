#include<stdio.h>
#include<conio.h>

void factorial(int n);//declaration of function

void main()
{
	int num;
	clrscr();
	printf("\nEnter num:");
	scanf("%d",&num);
	factorial(num);   //call the function
	getch();
}
void factorial(int n)  //definition of the function
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial %d Is:%d",n,fact);
}
