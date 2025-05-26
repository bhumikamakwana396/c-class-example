#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	clrscr();

	printf("\nEnter Marks:");
	scanf("%d",&marks);

	if(marks>90)
	{
		printf("\nGrade A");
	}
	else if(marks>75 && marks<=90)
	{
		printf("\nGrade B");
	}
	else if(marks>50 && marks<=75)
	{
		printf("\nGrade C");
	}
	else if(marks<=50)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nFail");
	}
	getch();
}