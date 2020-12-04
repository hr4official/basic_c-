#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class publisher
{
	public:
	long int pno;
	char name[20],add[20];
	publisher(char n[],char ad[],long int p_no)
	{
	  strcpy(name,n);
	  strcpy(add,ad);
	  pno=p_no;
	}
};

class book : public publisher
{
	public:
       long int ISBN;
       float price;
       char bname[20],aname[20];
       book(char n[], char ad[],long int p_no,char bn[],char an[],long int isbn,float prs) : publisher(n,ad,p_no)
       {

		strcpy(bname,bn);
		strcpy(aname,an);
		ISBN=isbn;
		price=prs;

	}
       void disp();

};
	void book :: disp()
	{
		cout<<endl<<setw(10)<<"INFORMATION ABOUT PUBLISHER:";
		cout<<"\n\t ******************************************:";
		cout<<"\n\t the name of publisher is:"<<name;
		cout<<"\n\t the address of publisher is:"<<add;
		cout<<"\n\t the phone no of publisher is:"<<pno;
		cout<<endl<<setw(10)<<"INFORMATION ABOUT BOOK:";
		cout<<"\n\t ******************************************:";
		cout<<"\n\t the name of book is:"<<bname;
		cout<<"\n\t the authorname of book is:"<<aname;
		cout<<"\n\t the ISBN of book is:"<<ISBN;
		cout<<"\n\t the price of book is:"<<price;
		cout<<"\n\t ******************************************:";
	}
	void main()
	{
		long int p_no,isbn;
		char n[20],an[20],bn[20],ad[20];
		float prs;
		clrscr();
		cout<<"\n enter the name of publisher:";
		cin>>n;
		cout<<"\n enter the address of publisher:";
		cin>>ad;
		cout<<"\n enter the phone no of publisher:";
		cin>>p_no;
		cout<<"\n enter the name of book:";
		cin>>bn;
		cout<<"\n enter the name of author:";
		cin>>an;
		cout<<"\n enter the ISBN of book:";
		cin>>isbn;
		cout<<"\n enter the price of book:";
		cin>>prs;

		book b(n,ad,p_no,bn,an,isbn,prs);

		cout<<"\n enter the name of publisher:";
		cin>>n;
		cout<<"\n enter the address of publisher:";
		cin>>ad;
		cout<<"\n enter the phone no of publisher:";
		cin>>p_no;
		cout<<"\n enter the name of book:";
		cin>>bn;
		cout<<"\n enter the name of author:";
		cin>>an;
		cout<<"\n enter the ISBN of book:";
		cin>>isbn;
		cout<<"\n enter the price of book:";
		cin>>prs;

		book b1(n,ad,p_no,bn,an,isbn,prs);

		cout<<"\n enter the name of publisher:";
		cin>>n;
		cout<<"\n enter the address of publisher:";
		cin>>ad;
		cout<<"\n enter the phone no of publisher:";
		cin>>p_no;
		cout<<"\n enter the name of book:";
		cin>>bn;
		cout<<"\n enter the name of author:";
		cin>>an;
		cout<<"\n enter the ISBN of book:";
		cin>>isbn;
		cout<<"\n enter the price of book:";
		cin>>prs;

		book b2(n,ad,p_no,bn,an,isbn,prs);
		b.disp();
		b1.disp();
		b2.disp();

		getch();
	}








