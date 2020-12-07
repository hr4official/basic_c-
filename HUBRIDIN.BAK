#include<iostream.h>
#include<conio.h>
class math
{
	protected:int a,b;
	public:
	void getdata()
	{
		cout<<"\n\t***ADDITION***";
		cout<<"\n Enter the First Number:";
		cin>>a;
		cout<<"\n Enter the Secound Number:";
		cin>>b;
	}
};
class plus:public math
{
	protected:int c;
	public:
	void add()
	{
		 c=a+b;

	}

};
class minus
{
	protected : int p,q,r;
	public:
	void sub()
	{
		cout<<"\n\t***SUBTRACTION***";
		cout<<"\n Enter the First Number:";
		cin>>p;
		cout<<"\n Enter the Secound Number:";
		cin>>q;
		r=p-q;
	}
};
class result:public plus,public minus
{
	public :
	void display()
	{
		cout<<"\n Sum of "<<a<<"and"<<b<<"="<<c;
		cout<<"\n Difference of"<<p<<"and"<<q<<"="<<r;
	}
};
	void main()
	{
		clrscr();
		result r;
		r.getdata();
		r.add();
		r.sub();
		r.display();
		getch();
	}