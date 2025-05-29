#include<stdio.h>
#include<conio.h>

struct Employee
{
	int id;
	char name[50];
	int salary;
};

void main()
{
	struct Employee e[2];
	int i;
	float avgsal;
	float totalsal;
	clrscr();
	printf("\nEnter Employee Detail\n\n");
	for(i=0;i<2;i++)
	{
		printf("\n**********************\n");
		printf("\n\nEnter employee id:");
		scanf("%d",&e[i].id);
		printf("\nEnter employee name:");
		scanf("%s",&e[i].name);
		printf("\nEnter employee salary:");
		scanf("%d",&e[i].salary);
		getchar();

		totalsal+=e[i].salary;

	}
	printf("\n******************************\n");
	printf("\n\nDisplay Employee Information\n");
	for(i=0;i<2;i++)
	{
		printf("\n\nEmployee id: %d",e[i].id);
		printf("\nEmployee name: %s",e[i].name);
		printf("\nEmployee salary: %d",e[i].salary);
	}
	avgsal=totalsal/2;

	printf("\n\nAll Employee salary sum is:%.2f",totalsal);
	printf("\nAverage of salary is : %.2f",avgsal);

	getch();
}
