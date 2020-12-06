#include<iostream.h>
#include<conio.h>
class month
{
	public:
	int m;
	void read();
	void disp();
	void operator ++();
};
	void month :: read()
	{
		sp:
		cout<<"\n enter the month no:";
		cin>>m;
		if(m>12)
		{
			cout<<"\n The Enter Month is invalid:";
			goto sp;
		}
	}


	void month :: operator ++()
	{
		if(m==12)
		{
			m=1;

		}
		else
		{
			m=m+1;
		}
	}
	void month :: disp()
	{
		cout<<"\n the next month is:"<<m;
	}
	void main()
	{
		clrscr();
		month m1;
		m1.read();
		m1++;
		m1.disp();
		getch();
	}
