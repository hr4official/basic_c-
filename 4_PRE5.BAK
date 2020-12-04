#include<iostream.h>
#include<conio.h>
class publication
{
	public:
	char t_b[20],t_ac[20];
	float p_b,p_ac;
	virtual void get_data();
	virtual void put_data();

};
class book : public publication
{
	public:
	int pages;
	void get_data();
	void put_data();
};
class tape : public publication
{
	public:
	float time;
	void get_data();
	void put_data();
};
	void publication :: get_data()
	{
		cout<<"\n enter the title of book:";
		cin>>t_b;
		cout<<"\n enter the title of audio cassate:";
		cin>>t_ac;
		cout<<"\n enter the price of book:";
		cin>>p_b;
		cout<<"\n enter the price of audio cassate:";
		cin>>p_ac;
	}
	void publication :: put_data()
	{
		cout<<"\n ===================================";
		cout<<"\n the title of book is:"<<t_b;
		cout<<"\n the price of book is:"<<p_b;
		cout<<"\n the title of audio casste:"<<t_ac;
		cout<<"\n the price of audio cassate:"<<p_ac;
	}
	void book :: get_data()
	{
		cout<<"\n enter the total pages:";
		cin>>pages;
	}
	void book :: put_data()
	{
		cout<<"\n the total no of pages is:"<<pages;
	}
	void tape :: get_data()
	{
		cout<<"\n enter the time of audio casste played:";
		cin>>time;
	}
	void tape :: put_data()
	{
		cout<<"\n the time of audio casste played is:"<<time;
		cout<<"\n ======================================:";
	}
void main()
{
	clrscr();
	publication p,*d;
	book b;
	tape t;
	d=&p;
	d->get_data();
	d=&b;
	d->get_data();
	d=&t;
	d->get_data();
	d=&p;
	d->put_data();
	d=&b;
	d->put_data();
	d=&t;
	d->put_data();
	getch();
}