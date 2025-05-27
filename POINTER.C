#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,*p,*q;
	double c,d,*p1,*q1;
	clrscr();
	a=10;
	b=20;
	c=30;
	d=40;

	p=&a;
	q=&b;
	p1=&c;
	q1=&d;

	printf("\nBefore value a is:%d",a);
	printf("\nAfter address of a is:%u",p);
	printf("\nP value is:%d",*p);

	printf("\n***************************\n");

	printf("\nBefore value b is:%d",b);
	printf("\nAfter address of b is:%u",q);
	printf("\nQ value is:%d",*q);

	printf("\n***************************\n");

	printf("\nBefore value c is:%lf",c);
	printf("\nAfter address of c is:%u",p1);
	printf("\nP1 value is:%lf",*p1);

	printf("\n***************************\n");

	printf("\nBefore value d is:%lf",d);
	printf("\nAfter address of d is:%u",q1);
	printf("\nq1 value is:%lf",*q1);

	getch();
}

