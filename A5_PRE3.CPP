#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	public:
	char s1[10],s2[10];
	void read();
	void operator +();
};
	void string :: read()
	{
		cout<<"\n enter the string1:";
		cin>>s1;
		cout<<"\n enter the string2:";
		cin>>s2;
	}
	void string :: operator +()
	{
		strcat(s1,s2);
		cout<<"\n the combine string is:"<<s1;
	}
void main()
{
	clrscr();
	string s;
	s.read();
	+s;
	getch();
}
