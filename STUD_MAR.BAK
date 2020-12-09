#include<iostream.h>
#include<conio.h>
#include<string.h>
class stud
{
      int no,i,n,t,p,c;
      int s[10];
      char name[20],g[15];
      public : void get()
	{
		cout<<"\n enter the Roll no:";
		cin>>no;
		cout<<"\n enter the student name:";
		cin>>name;
		cout<<"\n enter the no of subject :";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			faizal:
			cout<<"\n enter the sub "<<i<<" Marks :";
			cin>>s[i];
			if(s[i]>100)
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
			       //	cout<<"C is"<<c;
			}
		}
			t=0;
		for(i=1;i<=n;i++)
		{
			t=t+s[i];
		}


	}
	public : void cal()
	{

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
       public : void disp()
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
	clrscr();
	       stud s1;
		s1.get();
		s1.cal();
		s1.disp();
	getch();
}