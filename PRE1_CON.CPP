#include<iostream.h>
#include<conio.h>
class emp
{
	public:
	int eno,sal;
	char enm[20];
	emp()
	{
		cout<<"\n Enter the Employee no:";
		cin>>eno;
		cout<<"\n Enter the Employee Name:";
		cin>>enm;
		cout<<"\n Enter the Employee salary:";
		cin>>sal;
	}
	void disp()
	{
		cout<<"\n Employee No is : "<<eno;
		cout<<"\n Employee Name is : "<<enm;
		cout<<"\n Employee salary is : "<<sal;
	}
};
void main()
{
clrscr();
	emp e;
	e.disp();
getch();
}