#include<iostream.h>
#include<conio.h>
class fact
{
 public:
 int n,i;
 float f;
 fact()
 {
  cout<<"Factorial using Diffrent Looping Statements:\n";
 }
 fact(int a)
 {
    f=1;
    //n=a;

  for(i=1;i<=a;i++)
  {
  f=f*i;
  }
  cout<<"Factorial of is "<<f;
 }
 fact(double c)
 {
 f=1;
 i=1;
  do
  {
   f=f*i;
   i++;
  }while(i<=c);
  cout<<"Factorial is "<<f;
 }
 fact(float d)
 {
 f=1;
 i=1;
 while(i<=d)
 {
  f=f*i;
  i++;
 }
 cout<<"Factorial is "<<f;
 }
};
void main()
{
 int d,ch;
 float e;
 double b;
 clrscr();
 fact f1;
 cout<<"Enter Integer Value:";
 cin>>d;
 e=d;
 b=d;
 while(ch!=4)
 {
 cout<<"\n1.Factorial using FOR.........\n2.Factorial using DO...WHILE......\n3.Factorial using While\n4.Exit\n";
 cout<<"Enter Your Choice:";
 cin>>ch;
 switch(ch)
 {
   case 1:fact f2(d);
   break;
   case 2:fact f3(b);
   break;
   case 3:fact f4(e);
   break;
   default:cout<<"Thank You For Using This Programm.";
   break;
 }
 }
 getch();
};