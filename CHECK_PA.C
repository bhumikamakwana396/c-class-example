#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n,r=0,d,temp,x;
	char s1[20],s2[20];
	clrscr();
	printf("\nEnter N:");
	scanf("%d",&n);

	temp=n;
	while(n!=0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	if(r==temp)
	{
		printf("\n%d is palindrom Number",r);
	}
	else
	{
		printf("\n%d is not palindrom number",r);
	}

	printf("\n******************************\n");

	printf("\nenter string s1:");
	scanf("%s",&s1);

	strcpy(s2,s1);
	strrev(s2);
	x=strcmp(s2,s1);

	if(x==0)
	{
		printf("\n%s string is palindrom",s1);
	}
	else
	{
		printf("\n%s string is not palindrom",s1);
	}
	getch();
}



