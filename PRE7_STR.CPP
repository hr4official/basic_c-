#include<iostream.h>
#include<conio.h>
#include<string.h>
class string1
{
	public:
	int n,i;
	char s1[20],s2[20];
		void strrev1()
		{
			cout<<"\n Enter the string :";
			cin>>s1;
			strrev(s1);
			cout<<"\n \n \t Reverse string is :"<<s1;
		}
		void strupr1()
		{
			cout<<"\n Enter the string:";
			cin>>s1;
			strupr(s1);
			cout<<"\n \n \t Upper string is :"<<s1;
		}
		void strlwr1()
		{
			cout<<"\n Enter the string :";
			cin>>s1;
			strlwr(s1);
			cout<<"\n \t The Lower string is :"<<s1;
		}
		void strlen1()
		{
			cout<<"\n Enter the string :";
			cin>>s1;
			n=strlen(s1);
			cout<<"\n the Length of "<<s1<<" is :"<<n;
		}

};
void main()
{
	int ch,b[20],n,i;
	clrscr();
		string1 s;
		cout<<"\n \t \t Menu";
		cout<<"\n 1.Reverse";
		cout<<"\n 2.Upper";
		cout<<"\n 3.Lower";
		cout<<"\n 4.Length";
		cout<<"\n 5.Exit";
		do
		{
			cout<<"\n Enter your choice ";
			cin>>ch;
			switch(ch)
			{
				case 1: s.strrev1();
					break;
				case 2: s.strupr1();
					break;
				case 3: s.strlwr1();
					break;
				case 4: s.strlen1();
					break;
				default:
					break;
			}
		}while(ch!=5);
	getch();
}