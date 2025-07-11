#include<iostream.h>
#include<conio.h>

void add(int,int);
void sub(int,int);
void multi(int,int);
void div(int,int);
void main()
{
	int a,b;
	clrscr();
	cout<<"ENter two numbers";
	cin>>a>>b;
	add(a,b);
	sub(a,b);
	multi(a,b);
	div(a,b);
	getch();
}
void multi(int a,int b)
{
	int c;
	c=a*b;
	cout<<"\nMultiphication is :"<<c;

}
void sub(int a,int b)
{
	int c;
	c=a-b;
	cout<<"\nSubstraction is :"<<c;

}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"Addition is :"<<c;

}

void div(int a,int b)
{
	float c;
	c=a/b;
	cout<<"\nDivision is :"<<c;

}
