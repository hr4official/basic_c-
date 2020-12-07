#include<iostream.h>
#include<conio.h>
#include<string.h>
class stud
{
	public: int no;
		char name[20];
		void get()
		{
			cout<<"\n Enter the Roll No=>";
			cin>>no;
			cout<<"\n Enter the Name=>";
			cin>>name;
		}
		void put()
		{
			cout<<"\n The Roll No is:"<<no;
			cout<<"\n The Student Name is:"<<name;
		}
};
class mark:public stud
{
	public: int s[10];
		int n,i;
		int tot;
		float p;
		char g[10];
		void get1()
		{
			cout<<"\n Enter the n=>";
			cin>>n;
			for(i=0;i<n;i++)
			{
			  cout<<"\n Enter the Marks=>";
			  cin>>s[i];
			}
		}
		void put1()
		{
			for(i=0;i<n;i++)
			{
				cout<<"\n The Sub Marks is:"<<s[i];

			}
		}
		void cal()
		{
		     for(i=0;i<n;i++)
		     {
			   tot=tot+s[i];
		     }
			   p=tot/n;
				if(p>=70 || p<60)
				{
					strcpy(g,"O");
				}
				else if(p>=60 || p<50)
				{
					strcpy(g,"A");
				}
				else if(p>=50 || p<40)
				{
					strcpy(g,"B");
				}
				else
				{
					strcpy(g,"Fail");
				}


		}
		void disp()
		{
			cout<<"\n Total is:"<<tot;
			cout<<"\n Per is:"<<p;
			cout<<"\n Grade is:"<<g;
		}


};
		void main()
		{
			clrscr();
			mark m;
			m.get();
			m.get1();
			m.cal();
			cout<<"\n \tSTUDENT INFORMATION";
			cout<<"\n *******************************";
			m.put();
			m.put1();
			m.disp();
			getch();
		}
