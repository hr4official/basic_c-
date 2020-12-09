#include<iostream.h>
#include<conio.h>
class emp
{
   int no,sal;
   char name[20],dept ;
 public : void read()
   {
   cout<<"\n Enter the Employee  No==>>";
   cin>>no;
   cout<<"\nEnter the Employee Name==>>";
   cin>>name;
   cout<<"\nEnter the  Employee Department==>>" ;
   cin>>dept;
   cout<<"\nEnter the  Employee Salary==>>" ;
   cin>>sal;

   }
public : void disp()
   {  cout<<"\n Employee Information" ;
   cout<<"\n\n\n-----------------------";
   cout<<"\n Employee No is::"<<no;
   cout<<"\n Employee Name is::"<<name;
   cout<<"\n Employee Department is::"<<dept;
   cout<<"\n Employee Salary is::"<<sal;
    }
   };
   void main()
   {
      clrscr();
      emp e1;
      e1.read();
      e1.disp();
     getch();
   }