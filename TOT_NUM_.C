#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[30],ch;
	int l1,count=0,i;
	clrscr();
	printf("\nEnter string s1:");
	gets(s1);
	l1=strlen(s1);

	printf("\n*************************\n");
	printf("\nEnter character to want to count in given string:");
	scanf("%c",&ch);

	for(i=0;i<l1;i++)
	{
		if(s1[i]==ch)
		{
			count++;
		}
	}
	printf("\n*************************\n");
	printf("\nTotal Number of Character '%c' is :%d",ch,count);
	getch();

}