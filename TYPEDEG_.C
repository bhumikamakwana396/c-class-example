#include<stdio.h>
#include<conio.h>

void main()
{
	typedef int *intptr;
	intptr *p1;
	intptr *p2;
	intptr a,b;
	a=10;
	b=20;
	clrscr();
	p1=&a;
	p2=&b;

	printf("\nBefore value a is :%d",a);
	printf("\nAfter value a address is : %u",p1);

	printf("\n\nBefore value b is : %d",b);
	printf("\nAfter value b address is : %u",p2);

	getch();
}