#include<stdio.h>
#include<conio.h>

void main()
{
	typedef int id;
	id eid;
	id uid;
	id sid;
	clrscr();
	printf("\nEnter Employee Id:");
	scanf("%d",&eid);
	printf("\nEnter User Id:");
	scanf("%d",&uid);
	printf("\nEnter Student Id:");
	scanf("%d",&sid);

	printf("\nEmployee Id: %d",eid);
	printf("\nUser Id: %d",uid);
	printf("\nStudent Id: %d",sid);

	getch();
}