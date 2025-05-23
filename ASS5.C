#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	clrscr();

	printf("\n******************\n");
	printf("\n---For Loop---\n");
	for(i=1;i<=10;i++)
	{
		printf("\nI=%d",i);
	}

	printf("\n******************\n");
	printf("\n---While Loop---\n");
	i=1;
	while(i<=10)
	{
		printf("\nI=%d",i);
		i++;
	}

	printf("\n******************\n");
	printf("\n---Do While Loop---\n");
	i=1;
	do
	{
		printf("\nI=%d",i);
		i++;
	}while(i<=10);


	getch();
}
