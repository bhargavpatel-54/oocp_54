#include<iostream.h>
#include<conio.h>

void main()
{
	float u,p,r;
	clrscr();
	cout<<"\nEnter use (in unit):";
	cin>>u;
	if(u<=100)
	{
		p=u*60;
		r=p/100;
		cout<<"\nBill is:"<<r;
	}
	else if(u<=300)
	{
		p=u*80;
		r=p/100;
		cout<<"\nBill is:"<<r;
	}
	else
	{
		p=u*90;
		r=p/100;
		cout<<"\nBill is:"<<r;
	}

	getch();

}