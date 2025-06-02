#include<stdio.h>
#include<conio.h>
void main()
{
	int n,g,a=0;

	clrscr();

	srand(time(0));
	n=rand()%100+1;

	printf("\n Gause the number between 1 to 100");


	do
	{
		printf("\nEnter the guess number:");
		scanf("%d",&g);

		if(g<n)
		{
			printf("\nTo Low again");
		}
		else if(g>n)
		{
			printf("\nTo High again");
		}
		else
		{
			printf("\nCongratulation! You guessed number in %d attemts.",g);
		}
	}while(g!=n);

	getch();
}
