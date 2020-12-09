#include<iostream.h>
#include<conio.h>
#include<string.h>
class stud
{
    private : int rno;
	      char name[20];
    public:   void read();
	      void disp();
};
class marks:public stud
{
    protected:
	      int s1;
	      int s2;
	      int s3;
    public:
	      void getmarks();
	      void putmarks();
};
class result:public marks
{
   private:
	     int tot;
	     float p;
	     char div[10];
   public:
	     void process();
	     void printresult();
};
   void stud::read()
    {
    cout<<"\n Enter the Roll Number:";
    cin>>rno;
    cout<<"\n Enter the Name:";
    cin>>name;
    }
   void stud::disp()
    {
    cout<<"\nRoll Number is:"<<rno;
    cout<<"\n Name is:"<<name;
    }
   void marks::getmarks()
   {
   hitesh:
   cout<<"\n Enter the sub1:";
   cin>>s1;
   if(s1>100 || s1<0)
   {
	goto hitesh;
   }
   hitesh1:
   cout<<"\n Enter the sub2:";
   cin>>s2;
   if(s2>100 || s2<0)
   {
	goto hitesh1;
   }
   cout<<"\n Enter the sub3:";
   cin>>s3;
   hitesh2:
   if(s3>100 || s3<0)
   {
	goto hitesh2;
   }
   }
  void marks::putmarks()
   {
   cout<<"\nsub1 marks:"<<s1;
   cout<<"\nsub2 marks:"<<s2;
   cout<<"\nsub3 marks:"<<s3;
   }
  void result::process()
   {
   tot=s1+s2+s3;
   p=tot/3;
   p>=60?strcpy(div,"First"):p>=50?strcpy(div,"second"):strcpy(div,"Third");
   }
  void result::printresult()
   {
   cout<<"\n Total is:"<<tot;
   cout<<"\n Perchentage is:"<<p;
   cout<<"\n Div is:"<<div;
   }
    void main()
    {
      clrscr();
      result r1;
      r1.read();
      r1.getmarks();
      r1.process();
      r1.disp();
      r1.putmarks();
      r1.printresult();
      getch();

    }