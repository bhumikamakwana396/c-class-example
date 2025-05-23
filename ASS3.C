#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\nEnter B:");
	scanf("%d",&b);

	printf("\n****************************\n");

	printf("\n---Arthmetic Operator---\n");
	printf("\na+b=%d",a+b);
	printf("\na-b=%d",a-b);
	printf("\na*b=%d",a*b);
	if(b==0)
	{
		printf("\nDivision & Modulo Division Not allowed by zero");
	}
	else
	{
		printf("\na/b=%d",a/b);
		printf("\na%%b=%d",a%b);
	}

	printf("\n****************************\n");

	printf("\n---Relational Operator---\n");
	printf("\na==b =%d",a==b);
	printf("\na!=b =%d",a!=b);
	printf("\na<b  =%d",a<b);
	printf("\na>b  =%d",a>b);
	printf("\na<=b =%d",a<=b);
	printf("\na>=b =%d",a>=b);

	printf("\n****************************\n");

	printf("\n---Logical Operator---\n");

	printf("\na&&b=%d",a&&b);
	printf("\na||b=%d",a||b);
	printf("\n!(a)=%d",!(a));
	printf("\n!(b)=%d",!(b));
	getch();
}
