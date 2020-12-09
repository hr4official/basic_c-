#include<conio.h>
#include<iostream.h>
class cq
{
	int q[100];
	int r,f;
	public:
	cq()
	{
		r=-1;
		f=-1;
	}
       void insert(int x)
       {
		if(r>4)
		{
			cout<<"queue overflow";
			f=r=-1;
			return;
		}
		q[++r]=x;
		cout<<"\n inserted "<<x;

	}
       int delete1()
       {
		if(f==r)
		{
			cout<<"\n Queue underflow:";
			return 0;
		}
		cout<<"\n delete element from queue is "<<q[++f];
       }

       void disp()
       {
		if(f==r)
		{
			cout<<"\n Queue empty";
			return;
		}
			for(int i=f+1;i<=r;i++)
			{
			cout<<"\n The Element is "<<q[i]<<" ";
			}
       }


};
void main()
{
	int ch,v;
	clrscr();
	      //	cout<<"\n Enter no of element:";
	       //	cin>>n;
		cq  q1;
		cout<<"\n \t\t Menu";
		cout<<"\n 1.Push";
		cout<<"\n 2.Pop";
		cout<<"\n 3.Peep";
		cout<<"\n 4.Exit";
		do
		{
			cout<<"\n Enter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
						cout<<"\n Enter the value:";
						cin>>v;
						q1.insert(v);
					break;
				case 2:
					q1.delete1();
					break;
				case 3:
					q1.disp();
					break;
				case 4:
					break;
			}
		}while(ch!=4);

	getch();
}