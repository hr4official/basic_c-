#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class swap
{       public:
	swap(int a,int b)
	{

	 a=a+b;
	 b=a-b;
	 a=a-b;
	 cout<<"\n after swapping A is:" <<a;
	 cout<<"\n after swaping B is:"<<b;

	}
	swap(float c,float d)
	{
	c=c+d;
	d=c-d;
	c=c-d;
	cout<<"\n after swapping C is:"<<c;
	cout<<"\n after swapping D is:"<<d;
	}
};
void main()
{
	int x,y;
	float p,q;
	clrscr();
		cout<<"\n Enter the two integer no :";
		cin>>x>>y;
		cout<<"\n Enter the two Real No :";
		cin>>p>>q;
		swap(x,y);
		swap(p,q);
	getch();
}