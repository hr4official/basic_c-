#include<iostream.h>
#include<conio.h>
class person
{
	protected:
		int age;
		char name[20],city[30];
	public:
		void get()
		{
			cout<<"\n Enter the Name :";
			cin>>name;
			cout<<"\n Enter the Age :";
			cin>>age;
			cout<<"\n Enter the city :";
			cin>>city;
		}
		void print()
		{
			cout<<"\t \n    Personal Information :";
			cout<<"\n-------------------------------------------";
			cout<<"\n The Name is :"<<name;
			cout<<"\n The Age is :"<<age;
			cout<<"\n The City is :"<<city;
			cout<<"\n-------------------------------------------";
		}
};
void main()
{
	clrscr();
		person p;
		p.get();
		p.print();
	getch();
}