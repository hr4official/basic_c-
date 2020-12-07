#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class person
{
	char name[20],gender[10];
	int age;
	public :
		void getdata()
		{
			cout<<"\nName::";
			fflush(stdin);
			gets(name);
			cout<<"\nAge::";
			cin>>age;
			cout<<"\nGender::";
			cin>>gender;

		}
		void disp()
		{
			cout<<"\nName::"<<name<<endl;
			cout<<"\nAge::"<<age<<endl;
			cout<<"\nGender::"<<gender<<endl;

		}
};
class student:public person
{
	 char institute[100],level[20];
	 public:
		void getdata()
		 {
			 person::getdata();
			 cout<<"\n Name of the college/school::";
			 fflush(stdin);
			 gets(institute);
			 cout<<"\n Level::";
			 cin>>level;
		 }
		 void disp()
		 {
			person::disp();

			cout<<"\n Name of the college/school::"<<institute<<endl;
			cout<<"\n Level::"<<level<<endl;
		 }
};
class emp:public person
{
	char company[100];
	float sal;
	public:
		void getdata()
		{


			 cout<<"\n Name of the company::";
			 fflush(stdin);
			 gets(company);
			 cout<<"\n Salary:Rs::";
			 cin>>sal;
		}
		void disp()
		{
			cout<<"\n Name of the company::"<<company<<endl;
			cout<<"\n Salary::"<<sal<<endl;
		}
};
	int main()
	{
		clrscr();
		student s;
		emp e;
		cout<<"\n\t\t***Student***"<<endl;
		cout<<"\nEnter the data"<<endl;
		s.getdata();
		cout<<endl<<"\n\tDisplay data"<<endl;
		s.disp();
		cout<<endl<<"\n\t\t***Employee***"<<endl;
		cout<<"\n\tEnter data"<<endl;
		e.getdata();
		cout<<endl<<"\n\tDisplay data"<<endl;
		e.disp();
		getch();
		return 0;
	}