#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *fp;
	char data[50];
	clrscr();

	fp=fopen("txt2.text","w");

	printf("\nEnter Data:");
	gets(data);

	fputs(data,fp);
	fclose(fp);
	fp=fopen("txt2.text","r");

	while(fgets(data,50,fp)!=0)
	{
		printf("\n%s",data);
	}

	printf("\n\nFile current pointer is: %d",ftell(fp));
	fclose(fp);

	getch();
}