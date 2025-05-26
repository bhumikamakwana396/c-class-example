#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int i,n,IsPrime=1;
	clrscr();
	printf("\nEnter n:");
	scanf("%d",&n);
	printf("\nPrime Number\n");

	if(n<1)
	{
		IsPrime=0;
	}
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{

				IsPrime=0;
				break;
			}
		}
	}
	if(IsPrime)
	{
		printf("\n%d is Prime Number",n);
	}
	else
	{
		printf("\n%d is not Prime Number",n);
	}


	getch();
}