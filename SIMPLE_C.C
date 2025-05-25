#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ans;
	char op;
	clrscr();

	printf("\nEnter n1:");
	scanf("%d",&a);
	printf("\nEnter Operator +,-,*,/,%%: ");
	scanf("%s",&op);
	printf("\nEnter n2:");
	scanf("%d",&b);

	switch(op)
	{
		case '+':
			printf("\n%d",a+b);
			break;
		case '-':
			printf("\n%d",a-b);
			break;
		case '*':
			printf("\n%d",a*b);
			break;
		case '/':
			if(b!=0)
			{
				printf("\n%d",a/b);

			}
			else
			{
				printf("\ncan't divided by zero");
			}
			break;
		case '%':
			if(b!=0)
			{
				printf("\n%d",a%b);

			}
			else
			{
				printf("\ncan't divided by zero");
			}
			break;
		default:
			printf("\nWrong operator");
			break;
		}
		getch();
	}


