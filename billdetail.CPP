#include<iostream.h>
#include<conio.h>

void main()
{
	float u,p,r,ru,rat,tax;
	char name[10];
	clrscr();
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nEnter use (in unit):";
	cin>>u;
	if(u<=100)
	{
		p=u*60;
		r=p/100;
		cout<<"\ntotal rupees:"<<r;
	}
	else if(u<=300)
	{
		p=u*80;
		r=p/100;
		cout<<"\ntotal rupees:"<<r;
	}
	else
	{
		p=u*90;
		ru=p/100;
		tax=ru+50;
		rat=tax*15/100;
		r=tax+rat;
	}
	if(r>300)
	{
		cout<<"\nName      :"<<name;
		cout<<"\nAmmount   :"<<ru;
		cout<<"\nCharge    :50";
		cout<<"\nSurcharge :"<<rat;
		cout<<"\nTOTAL     :"<<r;

	}

	getch();

}