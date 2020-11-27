#include<iostream.h>
#include<conio.h>
class fact
{
	protected:
		int i,n;
		long int f;
	public:
		void get()
		{
			f=1;
			cout<<"\n Enter the No:";
			cin>>n;
			for(i=1;i<=n;i++)
			{
			    f=f*i;
			}
			cout<<"The factorial no of "<<n<<" is :"<<f;
		}
};
void main()
{
	clrscr();
		fact f;
		f.get();
	getch();

}