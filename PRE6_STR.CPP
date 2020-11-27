#include<iostream.h>
#include<conio.h>
#include<string.h>
class string1
{
	public:
	int n,i;
	char s1[20],s2[20];
		void strlen1()
		{
			cout<<"\n Enter the string :";
			cin>>s1;
			n=strlen(s1);
			cout<<"\n \n \t Length of "<<s1<<" is :"<<n;
		}
		void strcpy1()
		{
			cout<<"\n Enter the string 1:";
			cin>>s1;
			strcpy(s2,s1);
			cout<<"\n \n \t copy of string is :"<<s2;
		}
		void strcat1()
		{
			cout<<"\n Enter the string 1:";
			cin>>s1;
			cout<<"\n Enter the string 2:";
			cin>>s2;
			strcat(s1,s2);
			cout<<"\n \t The combine string is :"<<s1;
		}
		void strcmp1()
		{
			cout<<"\n Enter the string 1:";
			cin>>s1;
			cout<<"\n Enter the string 2:";
			cin>>s2;
			int a=strcmp(s1,s2);
			if(a==0)
			{
				cout<<"\n The string "<<s1<<" & "<<s2<<" is same:";
			}
			else
			{
				cout<<"\n The string "<<s1<<" & "<<s2<<" is not same:";
			}
		}

};
void main()
{
	int ch,b[20],n,i;
	clrscr();
		string1 s;
		cout<<"\t \t  Menu";
		cout<<"\n 1.Length";
		cout<<"\n 2.copy";
		cout<<"\n 3.Concate";
		cout<<"\n 4.compare";
		cout<<"\n 5.Exit";
		do
		{
			cout<<"\n Enter your choice ";
			cin>>ch;
			switch(ch)
			{
				case 1: s.strlen1();
					break;
				case 2: s.strcpy1();
					break;
				case 3: s.strcat1();
					break;
				case 4: s.strcmp1();
					break;
				default:
					break;
			}
		}while(ch!=5);
	getch();
}
