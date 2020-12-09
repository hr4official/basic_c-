#include<iostream.h>
#include<conio.h>
class stud
{
    protected:
    int rno,m1,m2;
    char name[20];
    public:
      void get()
     {
     cout<<"\n Enter the Student Roll NO:";
     cin>>rno;
     cout<<"\n Enter the Student Nmae:";
     cin>>name;
     cout<<"\n Enter the Two Subject Marks";
     cin>>m1>>m2;
     }

};
class sport
{
   protected:
     int sm;
     public:void getsum()
	{
	cout<<"\n Enter the Sport Marks:";
	cin>>sm;
	}
};
class statment:public stud,public sport
{
	 int tot,avg;
	 public : void disp()
	 {
	 tot=(m1+m2+sm);
	 avg=tot/3;
	 cout<<"\n Roll No:"<<rno;
	 cout<<"\n Name is:"<<name;
	 cout<<"\n Total is:"<<tot;
	 cout<<"\n Avrage is:"<<avg;
	 }
};
void main()
{
       clrscr();
       statment o;
       o.get();
       o.getsum();
       o.disp();
       getch();
}
