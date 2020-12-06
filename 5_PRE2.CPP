#include<iostream.h>
#include<conio.h>
class maximum
{
	public:
	void max(int a,int b)
	{
		if(a>b)
		{
		cout<<"\n A is max:";
		}
		else
		{
		 cout<<"\n B is max:";
		}
	}
	void max(int x,int y,int z)
	{
		if(x>y && x>z)
		{
		cout<<"\n X is max:";
		}
		else if(y>x && y>z)
		{
		 cout<<"\n Y is max:";
		}
		else
		{
		cout<<"\n Z is max:";
		}
	}
};
	void main()
	{
		int a,b,x,y,z;
		clrscr();
		maximum m;
		cout<<"\n enter the a:";
		cin>>a;
		cout<<"\n enter the b:";
		cin>>b;
		m.max(a,b);
		cout<<"\n enter the x:";
		cin>>x;
		cout<<"\n enter the y:";
		cin>>y;
		cout<<"\n enter the z:";
		cin>>z;
		m.max(x,y,z);
		getch();
	}
