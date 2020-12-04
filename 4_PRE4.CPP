#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class account
{
	public:
	long int ano;
	char name[20];
	account()
	{
	  cout<<"\n enter the acc no:";
	  cin>>ano;
	  cout<<"\n enter teh acc holder name:";
	  cin>>name;
	}
};
class type : public account
{
	public:
	char ty[20];
	type()
	{
		cout<<"\n enter the typw of acc(saving/currant):";
		cin>>ty;
	}
	void disp();
};
	void type :: disp()
	{
		cout<<"\n information about account holder:";
		cout<<"\n =================================";
		cout<<"\n the name of account holder is:"<<name;
		cout<<"\n the account no is:"<<ano;
		cout<<"\n the type of acc is:"<<ty;
		cout<<"\n ================================:";

	}
	void main()
	{
		clrscr();
		type t;
		type t1;
		type t2;

		t.disp();
		t1.disp();
		t2.disp();
		getch();
	}
