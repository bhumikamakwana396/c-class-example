#include<stdio.h>
#include<conio.h>

struct Author
{
	char name[50],country[50];
};

struct Book
{
	char title[50];
	int price;
	struct Author a[2];
};

void main()
{
	struct Book b[2];
	int i;
	clrscr();
	printf("\nEnter Library Information\n\n");
	for(i=0;i<2;i++)
	{
		printf("\n*******************\n");
		printf("\nEnter Auhtor name:");
		gets(b->a[i].name);
		printf("\nEnter Author country:");
		gets(b->a[i].country);
		printf("\nEnter Book title:");
		gets(b[i].title);
		printf("\Enter Book price:");
		scanf("%d",&b[i].price);
		getchar();
	}

	printf("\n**********************\n");
	printf("\nDisplay Book and Author Informatuon\n\n");
	for(i=0;i<2;i++)
	{
		printf("\n**********************\n");
		printf("\nAuthor Name : %s",b->a[i].name);
		printf("\nAuthor country : %s",b->a[i].country);
		printf("\nBook title: %s",b[i].title);
		printf("\nBook price: %d",b[i].price);
	}
	getch();
}