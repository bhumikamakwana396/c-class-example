#include<stdio.h>
#include<conio.h>
#include<string.h>


void str_reverse(char str[30])
{
	int i,l1=strlen(str);

	for(i=0;i<l1/2;i++)
	{
		char temp=str[i];
		str[i]=str[l1-1-i];
		str[l1-1-i]=temp;
	}

}

void main()
{
	char s1[30];
	clrscr();
	printf("\nEnter string s1:");
	scanf("%s",&s1);

	printf("\nBefore string is : %s",s1);
	str_reverse(s1);
	printf("\nAfter string reverse is : %s",s1);
	getch();
}