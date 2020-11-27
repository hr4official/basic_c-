#include<iostream.h>
#include<conio.h>
#include<ctype.h>
class student
{
	protected:
		int no,s1,s2,s3,tot;
		char name[20];
		float per;
	public:
		void get()
		{
			cout<<"\n Enter the Name :";
			cin>>name;
			cout<<"\n Enter the Roll No :";
			cin>>no;
			cout<<"\n Enter the sub mark 1 :";
			cin>>s1;
			cout<<"\n Enter the sub mark 2 :";
			cin>>s2;
			cout<<"\n Enter the sub mark 3 :";
			cin>>s3;
		}
		void cal()
		{
			  tot=s1+s2+s3;
			  per=tot/3;
		}
		void print()
		{
			cout<<"\nStudent Information :";
			cout<<"\n-------------------------------------------";
			cout<<"\n 	Name is :"<<name;
			cout<<"\n   Rolll no is :"<<no;
			cout<<"\n Sub1 marks is :"<<s1;
			cout<<"\n Sub2 marks is :"<<s2;
			cout<<"\n Sub3 marks is :"<<s3;
			cout<<"\n      Total is :"<<tot;
			cout<<"\n Percentage is :"<<per;
			cout<<"\n-------------------------------------------";
		}
};
void main()
{
	clrscr();
		student p;
		p.get();
		p.cal();
		p.print();
	getch();
}