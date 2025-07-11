#include<iostream.h>
#include<conio.h>
void swap(int,int);
void main()
{
	int a,b;
	clrscr();
	cout<<"\nEnter two number:";
	cin>>a>>b;
	swap(a,b);
	getch();
}
void swap(int a,int b)
{
	int c;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"\nA is:"<<a;
	cout<<"\nB is:"<<b;
}