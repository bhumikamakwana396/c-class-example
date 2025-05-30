#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	int rno;
	char sname[30];
	double per;
	clrscr();

	fp=fopen("txt1.text","r");

	fscanf(fp,"%s %d %lf",&sname,&rno,&per);

	printf("\nStudent Name: %s",sname);
	printf("\nStudent rollno: %d",rno);
	printf("\nStudent percentage: %lf",per);

	fclose(fp);
	getch();
}