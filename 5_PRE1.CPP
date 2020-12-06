#include<iostream.h>
#include<conio.h>
class over
{
	public:
	void volume(int a)
	{
		int cube;
		cube=a*a*a;
		cout<<"\n the cube is:"<<cube;
	}
	void volume(int r,int h)
	{
		int z;
		z=3.14*r*h;
		cout<<"\n the cylinder is:"<<z;
	}
	void volume(int l,int h, int b)
	{
		int s;
		s=l*b*h;
		cout<<"\n the rectenguler box is:"<<s;
	}
};
	void main()
	{
	    int a,r,h,l,b,n;
	    clrscr();
		over o;
		cout<<"\n enter the a:";
		cin>>a;
		o.volume(a);
		cout<<"\n enter the r:";
		cin>>r;
		cout<<"\n enter the h:";
		cin>>h;
		o.volume(r,h);
		cout<<"\n enter the l:";
		cin>>l;
		cout<<"\n enter the b:";
		cin>>b;
		cout<<"\n enter the n:";
		cin>>n;
		o.volume(l,b,n);
		getch();
	    }