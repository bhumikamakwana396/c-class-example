#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	char choice;
	clrscr();

	printf("\nEnter n1:");
	scanf("%d",&n1);
	printf("\nEnter n2:");
	scanf("%d",&n2);
	printf("\nEnter n3:");
	scanf("%d",&n3);

	printf("\n**********************\n");
	printf("\n1.l or L");
	printf("\n2.s or S");

	printf("\n***********************\n");
	printf("\nEnter want you choose:");
	scanf(" %c",&choice);

	printf("\n***********************\n");

	switch(choice)
	{
		 case 'L':
		   case 'l':
				if(n1>=n2 && n1>=n3)
				{
					printf("\nn1 is largest number:%d",n1);
				}
				else if(n2>=n1 && n2>=n3)
				{
					printf("\nn2 is largest number:%d",n2);
				}
				else
				{
					printf("\nn3 is largest number:%d",n3);
				}
				break;
		   case 's':

				if(n1<=n2 && n1<=n3)
				{
					printf("\nn1 Smallest number:%d",n1);
				}
				else if(n2<=n3 && n2<=n1)
				{
					printf("\nn2 is Smallest number:%d",n2);
				}
				else
				{
					printf("\nn3 is Smallest number:%d",n3);
				}
				break;
		   default:
			printf("\nWrong choice:");
		   break;
	}

	getch();
}
