#include<stdio.h>
#include<conio.h>

struct student
{
	int rno,s1,s2,s3,tot;
	double per;
	char sname[40];
};

void main()
{
	struct student s[2];
	int i;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("\nEnter rollno:");
		scanf("%d",&s[i].rno);
		printf("\nEnter student name:");
		scanf("%s",&s[i].sname);
		printf("\nEnter marks subject 1:");
		scanf("%d",&s[i].s1);
		printf("\nEnter marks subject 2:");
		scanf("%d",&s[i].s2);
		printf("\nEnter marks subject 3:");
		scanf("%d",&s[i].s3);

		s[i].tot=s[i].s1+s[i].s2+s[i].s3;
		s[i].per=s[i].tot/3;
	}
	for(i=0;i<2;i++)
	{
	printf("\n\nStudent Rollno: %d",s[i].rno);
	printf("\nStudent Name: %s",s[i].sname);
	printf("\nTotal Marks is: %d",s[i].tot);
	printf("\nPercentage is: %lf",s[i].per);

	if(s[i].per>=70)
	{
		printf("\nDistinction");
	}
	else if(s[i].per>=60)
	{
		printf("\nFirst class");
	}
	else if(s[i].per>=50)
	{
		printf("\nSecond class");
	}
	else if(s[i].per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nFail class");
	}
	}
	getch();
}
