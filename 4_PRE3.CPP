#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student
{
	public:
	int no,m[5],i;
	char name[20];
	void get()
	{
	cout<<"\n enter the no:";
	cin>>no;
	cout<<"\n enter the name:";
	cin>>name;


	for(i=0;i<5;i++)
		{
		cout<<"\n enter the marks"<<i+1<<":";
		cin>>m[i];
			if(m[i]>100)
			{
				do
				{
					cout<<"\n invalid marks:";
					cout<<"\n enter the marks:"<<i+1<<"=";
					cin>>m[i];
				}while(m[i]>100);
			}
		}
	}
};
	class result : public student
	{
		public:
		int tot,c;
		char res[20];
		float per;
		void calc();
		void disp();
	};
	void result :: calc()
	{
		tot=0;
		c=0;
		for(i=0;i<5;i++)
		{
			tot=tot+m[i];
		}
		per=tot/5;
		for(i=0;i<5;i++)
		{
			if(m[i]<30)
			{
			c=c+1;
			}
		}

	if(c==0)
	{
		if(per>=70)
		{
			strcpy(res,"A");
		}
		else if(per>=60 && per<70)
		{
			strcpy(res,"B");
		}
		else if(per>=50 && per<60)
		{
			strcpy(res,"C");
		}
		else if(per>=40 && per<50)
		{
			strcpy(res,"D");
		}
	}
	if(c==1 || c==2)
	{
		strcpy(res,"ATKT");
	}
	if(c>2)
	{
		strcpy(res,"FAIL");
	}
}

	void result :: disp()
	{

		cout<<endl<<setw(10)<<no<<setw(5)<<name<<setw(5)<<m[0]<<setw(5)<<m[1]<<setw(5)<<m[2]<<setw(5)<<m[3]<<setw(5)<<m[4]<<setw(7)<<tot<<setw(5)<<per<<setw(5)<<res;
	}
	void main()
	{
		int i=0,n;
		clrscr();
		cout<<"\n enter the no of student:";
		cin>>n;
		result r[50];
		for(i=1;i<=n;i++)
		{
		r[i].get();
		}
		cout<<"\n"<<setw(10)<<"number"<<setw(5)<<"name"<<setw(7)<<"M1"<<setw(5)<<"M2"<<setw(5)<<"M3"<<setw(5)<<"M4"<<setw(5)<<"M5"<<setw(7)<<"total"<<setw(5)<<"per"<<setw(7)<<"result";
		cout<<endl<<"=============================================================================="<<endl;
		for(i=1;i<=n;i++)
		{
		r[i].calc();
		r[i].disp();
		}
		getch();
	}




