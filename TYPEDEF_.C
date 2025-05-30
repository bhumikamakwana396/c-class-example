#include<stdio.h>
#include<conio.h>

typedef struct Book
{
	int id;
	char title[20];
	float price;
}Book;

void main()
{
	Book b;
	clrscr();

	printf("\nEnter Book Id:");
	scanf("%d",&b.id);
	getchar();
	printf("\nEnter Book Title:");
	gets(b.title);

	getchar();
	printf("\nEnter Book Price:");
	scanf("%f",&b.price);

	printf("\n\nBook Information is:\n\n");
	printf("\nBook Id: %d",b.id);
	printf("\nBook Title: %s",b.title);
	getchar();
	printf("\nBook Price: %.2f",b.price);
	getch();
}
