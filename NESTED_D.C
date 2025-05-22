#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j;
	clrscr();
	do
	{
		j=0;
		do
		{
			printf("%d",i*3+j);
			j++;
		}while(j<3);
		printf("\n");
		i++;
	}while(i<3);
	getch();
}
