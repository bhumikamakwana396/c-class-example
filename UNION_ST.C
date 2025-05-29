#include<stdio.h>
#include<conio.h>

union student
{
	int rno,s1,s2,s3,tot;
	double per;
	char sname[40];
};

void main()
{
	union student s;
	clrscr();
	printf("\nEnter rollno*:");
	scanf("%d",&s.rno);
	printf("\nEnter student name:");
	scanf("%s",&s.sname);
	printf("\nEnter marks subject 1:");
	scanf("%d",&s.s1);
	printf("\nEnter marks subject 2:");
	scanf("%d",&s.s2);
	printf("\nEnter marks subject 3:");
	scanf("%d",&s.s3);

       s.tot=s.s1+s.s2+s.s3;
	s.per=s.tot/3;

	printf("\n\nStudent Rollno: %d",s.rno);
	printf("\nStudent Name: %s",s.sname);
	printf("\nTotal Marks is: %d",s.tot);
	printf("\nPercentage is: %lf",s.per);

	if(s.per>=70)
	{
		printf("\nDistinction");
	}
	else if(s.per>=60)
	{
		printf("\nFirst class");
	}
	else if(s.per>=50)
	{
		printf("\nSecond class");
	}
	else if(s.per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nFail class");
	}

	getch();
}
