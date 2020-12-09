#include<iostream.h>
#include<conio.h>
class mirror
{
	public:
	int n,a,b,c,i,k,j;
	char d;
	void get()
	{
		d='A';
		cout<<"\n Enter the number:";
		cin>>n;
		for(i=1;i<=n;i++,d++)
		{
			for(j=1;j<n-1;j++)
			{
				cout<<" ";
			}
			for(k=1;k<=i;k++)
			{
			   if(i%2==0)
			   {
				cout<<i;
			   }
			   else
			   {
			    cout<<d;
			    }
			}
			cout<<"\n";
		}
	}
};
void main()
{
	clrscr();
		mirror m;
		m.get();
	getch();
}