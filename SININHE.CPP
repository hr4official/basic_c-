#include<iostream.h>
#include<conio.h>
#include<string.h>
class stud
{    public:
      int no;
      char name[20];
      public : void get()
	{
		cout<<"enter the no:";
		cin>>no;
		cout<<"enter the name:";
		cin>>name;
	}
};
class stud1 : public stud
{
	public : void disp()
	{
		cout<<"\nstudent no is :"<<no;
		cout<<"\nstudent name is :"<<name;

	}
};
void main()
{
	clrscr();
		stud1 s1;
		s1.get();
		s1.disp();
	getch();
}