#include<iostream.h>
#include<conio.h>

void main()
{
	int i,sum=0,n;
	clrscr();

	cout<<"\nEnter n:";
	cin>>n;

	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"\nSum="<<sum;
	getch();
}