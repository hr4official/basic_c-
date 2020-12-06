#include<iostream.h>
#include<conio.h>
class CALENDER
{
  public:
  int d,m,y;
  CALENDER()
  {
   d=1;
   m=1;
   y=1990;
  }
  ~CALENDER()
  {
   cout<<"\nThanks for executing this program code.\n\tHave a Nice Day.";
  }
  CALENDER(int a,int b,int c)
  {
    d=a;
    m=b;
    y=c;
  }
  void operator++()
  {
  if(m==4||m==6||m==9||m==11)
  {
   if(d==30)
   {
      d=0;
      m+=1;
   }
  }
  if(y%4==0)
  {
  if(m==2)
   {
    if(d>=29)
    {
     d=0;
     m+=1;
    }
   }
   }
  if(m==12 &&d==31)
  {
   d=0;
   m=1;
   y+=1;
  }
   d+=1;
   if(d>31)
   {
    d=1;
    m=m+1;
   }

  }
  void display()
  {
   cout<<"Tomorrow Date is (DD/MM/YYYY): "<<d<<"/"<<m<<"/"<<y<<"."<<endl;
  }
};
void main()
{
 CALENDER c1;
 int a,b,c;
 clrscr();
 cal:
   cout<<"Enter Date: Month: Year:";
   cin>>a>>b>>c;
   if(a>31 || a<1 || b>12 || b<1 ||c<1990 || c>3000)
   {
    cout<<"Invalid Input!!!..............."<<endl;
    goto cal;
    }
  CALENDER c2(a,b,c);
 c2++;
 c2.display();
 getch();
}