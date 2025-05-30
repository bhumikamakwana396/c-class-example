#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	int rno;
	char sname[30];
	double per;
	clrscr();

	fp=fopen("txt1.text","w");

	printf("\nEnter student name:");
	gets(sname);

	printf("\nEnter student rollno:");
	scanf("%d",&rno);

	printf("\nEnter student percentege:");
	scanf("%lf",&per);

	fprintf(fp,"%s %d %lf",sname,rno,per);
	fclose(fp);
	getch();
}