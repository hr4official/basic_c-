#include<iostream.h>
#include<conio.h>
class fibo
{
	public:
	int n,a,b,c,i;
	void get()
	{
		a=0;
		b=1;
		c=0;
		cout<<"\n Enter the Number:";
		cin>>n;
		for(i=0;i<n;i++)
		{
			cout<<" "<<c;
			c=a+b;
			b=a;
			a=c;
		}
	}
};
void main()
{
	clrscr();
	fibo f;
	f.get();
	getch();
}