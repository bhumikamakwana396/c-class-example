#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int qty,amt=0,tamt=0,choice;
	char t;
	clrscr();
	printf("\n1.Pizza\t\tPrice = 180rs/pcs");
	printf("\n2.Burger\tPrice = 100rs/pcs");
	printf("\n3.Dosa\t\tPrice = 120rs/pcs");
	printf("\n4.Idli\t\tPrice = 50rs/pcs");



	do
	{
		printf("\n\nPlease Enter Your choose..:");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\nYou Have Selected Pizza.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			amt=180*qty;
			tamt=amt+tamt;
			printf("\nAmount:%d",amt);
			printf("\nTotal Amount is = %d",tamt);
		}
		if(choice==2)
		{
			printf("\nYou Have Selected Burger.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			amt=100*qty;
			tamt=amt+tamt;
			printf("\nAmount:%d",amt);
			printf("\nTotal Amount is = %d",tamt);
	       }
	       if(choice==3)
	       {
			printf("\nYou Have Selected Dosa.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			amt=120*qty;
			tamt=amt+tamt;
			printf("\nAmount:%d",amt);
			printf("\nTotal Amount is = %d",tamt);
		}
		if(choice==4)
		{
			printf("\nYou Have Selected Idli.");
			printf("\nEnter the quantity:");
			scanf("%d",&qty);
			amt=50*qty;
			tamt=amt+tamt;
			printf("\nAmount:%d",amt);
			printf("\nTotal Amount is = %d",tamt);
		}
		printf("\n\nDo you want place more orders? y&n:");
		scanf("%s",&t);
	      if(t=='y')
	      {
		printf("\n\n----------Menu----------\n");
		printf("\n1.Pizza\t\tPrice = 180rs/pcs");
		printf("\n2.Burger\tPrice = 100rs/pcs");
		printf("\n3.Dosa\t\tPrice = 120rs/pcs");
		printf("\n4.Idli\t\tPrice = 50rs/pcs");

	      }
	      else
	      {
		printf("\nThank You! For Order Take");
	      }

	     }while(t=='y');

	getch();

}