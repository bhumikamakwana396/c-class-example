//declare library function
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[20],s2[20];
	int len;
	clrscr();
	printf("\nEnter string s1:");
	gets(s1);
	printf("\nEnter string s2:");
	gets(s2);

	strcat(s1,s2); //concat the string
	printf("\nAfter String s1 & s2 are concate:%s",s1);

	len=strlen(s1); //calculate string length
	printf("\nAfter string s1 & s2 are length is:%d",len);
	getch();
}