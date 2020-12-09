#include<conio.h>
#include<iostream.h>
int top=0;
int st[100];
class stack
{
	public:
       void insert(int s)
       {
		st[top]=s;
		top++;
       }
       int delete1()
       {
		top--;
		return st[top];
       }
       void change(int s)
       {
	    cout<<"\n Enter the value :";
	    cin>>st[s-1];
       }
       void disp()
       {
		for(int i=0;i<=top-1;i++)
		{
			cout<<"\n The element is "<<st[i];
		}
       }


};
void main()
{
	int ch,v,n;
	clrscr();
	stack s1;
		cout<<"\n Enter no of element:";
		cin>>n;
		cout<<"\n \t\t Menu";
		cout<<"\n 1.Push";
		cout<<"\n 2.Pop";
		cout<<"\n 3.change";
		cout<<"\n 4.Peep";
		cout<<"\n 5.Exit";
		do
		{
			cout<<"\n Enter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
					if(top==n)
					{
						cout<<"\n Stack is overflow:";
					}
					else
					{
						cout<<"\n Enter the value:";
						cin>>v;
						s1.insert(v);
					}
					break;
				case 2:
					if(top<0)
					{
						cout<<"\n Stack is underflow ";
					}
					else
					{
						v=s1.delete1();
						cout<<"\n element to be delete is :"<<v;
					}
					break;
				case 3:
					if(top<0)
					{
						cout<<"\n Stack is underflow ";
					}
					else
					{
						cout<<"\n Enter the elment to change:";
						cin>>v;
						s1.change(v);
					}
					break;
				case 4:
					if(top<0)
					{
						cout<<"\n Stack is underflow ";
					}
					else
					{
						s1.disp();
					}
					break;
				case 5:
					break;
			}
		}while(ch!=5);

	getch();
}