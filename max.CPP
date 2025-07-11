#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b,c,max;

	cout<<"Enter Number one:";
	cin>>a;
	cout<<"Enter Number Two:";
	cin>>b;
	cout<<"Enter Number therd:";
	cin>>c;

	if(a>=b && a>=c)
	{
		max=a;
	}
	else if(b>=a && b>=c)
	{
		max=b;
	}
	else
	{
		max=c;
	}

	cout<<"Maximum Number is:"<<max;
	getch();
}