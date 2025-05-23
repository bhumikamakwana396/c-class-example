#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,n;
	clrscr();
	printf("\nEnter N:");
	scanf("%d",&n);

	printf("\n****************************\n");
	if(n%2==0)
	{
		printf("\n%d is Even Number\n");
	}
	else
	{
		printf("\n%d is Odd Number\n");
	}
	printf("\n****************************\n");

	printf("\n1.January");
	printf("\n2.February");
	printf("\n3.March");
	printf("\n4.April");
	printf("\n5.May");
	printf("\n6.Jun");
	printf("\n7.Julay");
	printf("\n8.Augast");
	printf("\n9.Sptember");
	printf("\n10.Actomber");
	printf("\n11.November");
	printf("\n12.December");

	printf("\n****************************\n");

	printf("\nEnter your choice:");
	scanf("%d",&choice);
	printf("\n****************************\n");
	switch(choice)
	{
		case 1:
			printf("\n1.January");
			break;
		case 2:
			printf("\n2.February");
			break;
		case 3:
			printf("\n3.March");
			break;
		case 4:
			printf("\n4.April");
			break;
		case 5:
			printf("\n5.May");
			break;
		case 6:
			printf("\n6.June");
			break;
		case 7:
			printf("\n7.July");
			break;
		case 8:
			printf("\n8.August");
			break;
		case 9:
			printf("\n9.September");
			break;
		case 10:
			printf("\n10.Octomber");
			break;
		case 11:
			printf("\n11.November");
			break;
		case 12:
			printf("\n12.December");
			break;
		default:
			printf("\nWrong choice");
			break;
	}
	getch();
}


