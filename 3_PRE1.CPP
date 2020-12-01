#include<iostream.h>
#include<conio.h>
class bank
{
	public:
	int ba,acc_no;
	char name[20],type[20];

	void get()
	{
	cout<<"\n enter the name:";
	cin>>name;
	cout<<"\n enter the accno;";
	cin>>acc_no;
	cout<<"\n enter the balance amount:";
	cin>>ba;
	cout<<"\n enter the type of acc:";
	cin>>type;
	}
	void depo()
	{
			int amt,depo1=0;
			cout<<"\n enter the deposite:";
			cin>>amt;
			depo1=amt;
			depo1=depo1+ba;
			cout<<"\n the balance is:"<<depo1;
			ba=depo1;
	 }
	 void with()
	 {
		int wa;
		cout<<"\n enter the withdraw amt:";
		cin>>wa;
		if(wa>ba)
		{
		cout<<"\n not enough bal:";
		}
		else
		{
			ba=ba-wa;
			cout<<"\n balance is:"<<ba;
		}
	 }
	 void disp()
	 {
	  cout<<"\n the balnce is:"<<ba;
	  cout<<"\n the name is:"<<name;

	 }
};
	void main()
	{
	  int a,n,i;
	  clrscr();
	  bank b[5];
	  cout<<"\n enter the no:";
	  cin>>n;
	  for(i=0;i<n;i++)
	  b[i].get();
	  cout<<"\n MENU:";
	  cout<<"\n 1.deposite:";
	  cout<<"\n 2.withdraw:";
	  cout<<"\n 3.exit:";
	  do
	  {
	  cout<<"\n enter the choise:";
	  cin>>a;
		switch(a)
		{
			case 1:
				for(i=0;i<n;i++)
				b[i].depo();
			break;
			case 2:
				for(i=0;i<n;i++)
				b[i].with();
			break;
			case 3:
			break;
		}
	  }while(a!=3);
	  for(i=0;i<n;i++)
	  b[i].disp();
	  getch();
	}

