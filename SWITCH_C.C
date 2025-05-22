#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ans,choice;
	clrscr();
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\nEnter B:");
	scanf("%d",&b);

	printf("\n******************\n");

	printf("\n\n1.Addition");
	printf("\nSubstraction");
	printf("\nMultiplication");
	printf("\nDivision");

	printf("\n\n******************\n");

	printf("\nEnter your choice:");
	scanf("%d",&choice);

	printf("\n******************\n");
	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("\nAddition=%d",ans);
			break;
		case 2:
			ans=a-b;
			printf("\nSubstraction=%d",ans);
			break;
		case 3:
			ans=a*b;
			printf("\nMultiplication=%d",ans);
			break;
		case 4:
			ans=a/b;
			printf("\nDivision=%d",ans);
			break;
		default:
			printf("\nWrong choice");
			break;
	}
	getch();
}
