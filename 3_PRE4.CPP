#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class employee
{
	public:
	long int eno,bs,ns,td,code,pf,da,hra,gs,it;
	char name[20];
	void get();
	void calc();
	void print();
	void result();
};

	void employee :: get()
	{
		sp:
		cout<<"\n enter the employee code:";
		cin>>code;
		if(code<0 || code>4)
		{
			goto sp;
		}
		cout<<"\n enter the employee no:";
		cin>>eno;
		cout<<"\n enter the name:";
		cin>>name;
		cout<<"\n enter the basic salary:";
		cin>>bs;
	}
	void employee :: calc()
	{

		if(bs<=1500)
		{
			da=(bs*159)/100;
		}
		else if(bs>1500 && bs<=2500)
		{
			da=(bs*148)/100;
		}
		else if(bs>2500 && bs<=4500)
		{
			da=(bs*125)/100;
		}
		else if(bs>4500)
		{
			da=(bs*90)/100;
		}
		if(code==0)
			hra=0;
		else if(code==1)
			hra=120;
		else if(code==2)
			hra=250;
		else if(code==3)
			hra=400;
		gs=da+hra+bs;
		it=(gs*10)/100;
		pf=80;
		td=it+pf;
		ns=gs-it;
	}
	void employee :: print()
	{
		cout<<endl<<setw(48)<<"EMPLOYEE PAYSLIP:"<<endl;
		cout<<setw(10)<<"employee number:"<<eno;
		cout<<setw(7)<<"Name:"<<name<<endl;
		cout<<setw(10)<<"=================================================:"<<endl;
	}
	void employee :: result()
	{
			cout<<setw(10)<<"Earnings"<<setw(9)<<" Amount"<<setw(15)<<"deduction"<<setw(12)<<"Amount"<<endl;
			cout<<setw(10)<<"BASIC"<<setw(9)<<bs<<endl;
			cout<<setw(10)<<"DA"<<setw(9)<<da<<setw(15)<<" PT"<<setw(7)<<pf<<endl;
			cout<<setw(10)<<"HRA"<<setw(9)<<hra<<setw(15)<<" INCOME TAX"<<setw(7)<<it<<endl;
			cout<<setw(10)<<"-----------------------------------------------------"<<endl;
			cout<<setw(10)<<"GROSS"<<setw(9)<<gs<<setw(15)<<" TOTAL DEDUCTION"<<setw(7)<<td<<endl;
			cout<<setw(10)<<"======================================================"<<endl;
			cout<<setw(50)<<"NET SALARY:"<<setw(5)<<ns<<endl;
	}

	void main()
	{
		employee s[50];
		int n,i;
		clrscr();
		cout<<"\n enter the no:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			s[i].get();
			s[i].calc();
		}
		for(i=1;i<=n;i++)
		{
			s[i].print();
			s[i].result();
		}
		getch();
	}

