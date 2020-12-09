#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	public : int no;
      public : char name[20];
      public : void get()
	{
		cout<<"\n enter the roll no:";
		cin>>no;
		cout<<"\n enter the name:";
		cin>>name;

	}
};
class cal
{
	public:
	int t,n,c,s[20],i;
	float p;
	char g[20];
	void get1()
	{
		cout<<"\n enter the no of subject:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			faizal:
			cout<<"\n enter the sub "<<i<<" Marks :";
			cin>>s[i];
			if(s[i]>100 || s[i]<0)
			{
				goto faizal;
			}
		}
		c=0;
		for(i=1;i<=n;i++)
		{
			if(s[i]<40)
			{
				c=c+1;

			}
		}
		t=0;
		for(i=1;i<=n;i++)
		{
			t=t+s[i];
		}


		p=t/n;
			if(p>=70)
			{
				strcpy(g,"dist");
			}
			else if(p>=60 && p<70)
			{
				strcpy(g,"first");
			}
			else if(p>=50 && p<60)
			{
				strcpy(g,"second");
			}
			else if(p>=40 && p<50)
			{
				strcpy(g,"pass");
			}


	}

};
class result : public student,public cal
{
	public:
	void disp()
	{
		if(c==1 || c==2)
		{
		       strcpy(g,"ATKT");
			cout<<"\n \t\t student marksheet ";
			cout<<"\n \t ----------------------------------";
			cout<<"\n \t student roll no is :"<<no;
			cout<<"\n \t student name is :"<<name;
			for(i=1;i<=n;i++)
			{
				cout<<"\n\t student marks"<<i<<" is :"<<s[i];
			}
			cout<<"\n\t Total is :"<<t;
			cout<<"\n\t Percentage :"<<"****";
			cout<<"\n\t grade :"<<g;
			cout<<"\n\t ----------------------------------";
		}
		if(c>2)
		{
		       strcpy(g,"fail");
			cout<<"\n \t\t student marksheet ";
			cout<<"\n\t ----------------------------------";
			cout<<"\n\t student roll no is :"<<no;
			cout<<"\n\t student name is :"<<name;
			for(i=1;i<=n;i++)
			{
				cout<<"\n\t student marks"<<i<<" is :"<<s[i];
			}
			cout<<"\n\t Total is :"<<t;
			cout<<"\n\t Percentage :"<<"****";
			cout<<"\n\t grade :"<<g;
			cout<<"\n\t ----------------------------------";
		}
		if(c==0)
		{	cout<<"\n\t\t student marksheet ";
			cout<<"\n\t ----------------------------------";
			cout<<"\n\t student roll no is :"<<no;
			cout<<"\n\t student name is :"<<name;
			for(i=1;i<=n;i++)
			{
				cout<<"\n\t student marks"<<i<<" is :"<<s[i];
			}
			cout<<"\n\t Total is :"<<t;
			cout<<"\n\t Percentage :"<<p;
			cout<<"\n\t grade :"<<g;
			cout<<"\n\t ----------------------------------";
		}
	}

};
void main()
{
	int n1,i;
	clrscr();
		result r[100];
		cout<<"\n Enter the number of student:";
		cin>>n1;
		for(i=1;i<=n1;i++)
		{
			r[i].get();
			r[i].get1();
		}
		cout<<"\n ---------------------------------------------------";
		for(i=1;i<=n1;i++)
		{
			r[i].disp();
		}

	getch();
}