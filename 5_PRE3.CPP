#include<iostream.h>
#include<conio.h>
#include<string.h>
class rev
{
	public:
	void reverse(int n)
	{
	    int i,r=0;
	    while(i<n)
	    {
		int b;
		b=n%10;
		n=n/10;
		r=(r*10)+b;
	    }
		cout<<"\n the reverse no is="<<r;

	}
	void reverse(char s[])
	{
		strrev(s);
		cout<<"\n reverse string is:"<<s;
	 }
};
	void main()
	{
		int n;
		char s[10];
		clrscr();
		rev r1;
		cout<<"\n enter the N:";
		cin>>n;
		r1.reverse(n);
		cout<<"\n enter the string:";
		cin>>s;
		r1.reverse(s);
		getch();
	}