
#include<iostream.h>
#include<conio.h>
class student
{
 public:
    int stud_no;
    char name[20];

    void get_stud()
    {
    cout<<"enter student num.";
    cin>>stud_no;
    cout<<"enter student name";
    cin>>name;
    }
    };
 class marks:public student
 {
   public:
   int mark[5];
   public:
   void get_mark()
   {
      for(int i=0;i<5;i++)
      {
	cout<<"enter mark["<<i+1<<"]"<<":";
	cin>>mark[i];
	while(mark[i]>100)
	{
	 cout<<"invalid mark";
	 cout<<"\nenter marks["<<i+1<<"]"<<":";
	 cin>>mark[i];
	 }

       }
    }
 };
   class result:public marks
   {
    public:
    double total, per;
    char grade;
    void calc()
    {
     total=0;
     for(int i=0;i<5;i++)
      {
	total=total + mark[i];
	per=total/5;
	grade=1;
	if (per<30)
	{
	  grade='F';
	  }
	  else if(per<50 && per>30)
	     {
	      grade='D';
	      }


	   else if(per<60 && per>50)
	     {
		grade='C';
	      }
	    else if(per<70 && per>60)
	      {
		grade='B';
	      }

	       else
	       {
		grade='A';
		}
	      }
	   }
      void disp()
      {
	 cout<<"\n"<<stud_no<<"\t"<<name;
	 for(int i=0;i<5;i++)
	 {
	    cout<<"\t" << mark[i];

	    }
	    cout<<"\t"<<total<<"\t" <<per<<"\t"<<grade;
       }

       };
       void main()
       {
//       marks m[5];
	int n;

	result r[5];
	clrscr();
	cout<<"enter the no ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	 //cout<<"\n"<<i+1;
	 r[i].get_stud();
	 r[i].get_mark();
	 r[i].calc();
	 }
	 clrscr();
	 cout<<"\n                marksheet       \n";
	 cout<<"no\tname    m1      m2    m3    m4    m5    total\t per\t result";
	 for(i=0;i<n; i++)
	 {
	    r[i].disp() ;

	  }
	getch();
	}