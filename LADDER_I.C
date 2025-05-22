#include<stdio.h>
#include<conio.h>
void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char *sname;
	clrscr();
	printf("\nEnter student name:");
	gets(sname);
	printf("\nEnter rollno:");
	scanf("%d",&rno);
	printf("\nEnter mark of subject 1:");
	scanf("%d",&s1);
	printf("\nEnter mark of subject 2:");
	scanf("%d",&s2);
	printf("\nEnter mark of subject 3:");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	 printf("\nStudent Name:%s",sname);
	 printf("\nStudent Rollno:%d",rno);
	 printf("\nStudent Total Marks:%d",total);
	 printf("\nStudent Percentage:%lf",per);

	 if(per>=70)
	 {
		printf("\nDistinction");
	 }
	 else if(per>=60)
	 {
		printf("\nFirst class");
	 }
	 else if(per>=50)
	 {
		printf("\nsecond class");
	 }
	 else if(per>=40)
	 {
		printf("\nPass class");
	 }
	 else
	 {
		printf("\nFail Class");
	 }
	 getch();
}

