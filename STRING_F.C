#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50],s2[50],s3[50];
	int l1,x,l2;
	clrscr();
	printf("\Enter string s1:");
	gets(s1);
	printf("\nEnter string s2:");
	gets(s2);

	l1=strlen(s1);
	l2=strlen(s2);
	printf("\n*************************\n");
	printf("\nLength of string s1 is:%d",l1);
	printf("\nLength of string s2 is:%d",l2);

	printf("\n\n*************************\n");
	x=strcmp(s1,s2);

	if(x==0)
	{
		printf("\nBoth string are equal");
	}
	else
	{
		printf("\nBoth string are different\n");
	}
	printf("\n*************************\n");
	strcat(s1,s2);
	printf("\nAfter string s1 & s2 concat:%s",s1);
	printf("\n\n*************************\n");

	strcpy(s3,s1);
	printf("\nAfter string s3 is copy string s1 Is:%s",s3);

	printf("\n*************************\n");

	strrev(s3);
	printf("\nAfter string s3 is reverse string is:%s",s3);

	getch();
}