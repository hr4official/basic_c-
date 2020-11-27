#include<iostream.h>
#include<conio.h>
class myarray
{
	public:
	int j,i,n,b[20];
	void asc()
	{
			cout<<"\n Enter the No of element:";
		cin>>n;
			for(i=1;i<=n;i++)
			{
				cout<<"\n Enter the array element of "<<i<<":";
				cin>>b[i];
			}
			int k;
			for(i=1;i<=n;i++)
			{
				for(j=i;j<=n;j++)
				{
				    if(b[i]>b[j])
				    {
					k=b[i];
					b[i]=b[j];
					b[j]=k;
				    }
				}
			}
			cout<<"\t\n Ascending No is :";
			for(i=1;i<=n;i++)
			{
				cout<<" "<<b[i];
			}
		}
		void dsc()
		{
			int k;
			for(i=1;i<=n;i++)
			{
				for(j=i;j<=n;j++)
				{
				    if(b[i]<b[j])
				    {
					k=b[i];
					b[i]=b[j];
					b[j]=k;
				    }
				}
			}
			cout<<"\n Descending no is :";
			for(i=1;i<=n;i++)
			{
			       cout<<" "<<b[i];
			}

		}
};
void main()
{
	int ch,b[20],n,i;
	clrscr();
		myarray a;
		cout<<"\t \t \n Menu";
		cout<<"\n 1.Ascending";
		cout<<"\n 2.descending";
		cout<<"\n Exit";
		do
		{
			cout<<"\n Enter your choice ";
			cin>>ch;
			switch(ch)
			{
				case 1: a.asc();
					break;
				case 2: a.dsc();
					break;
				case 3:
					break;
			}
		}while(ch!=3);
	getch();
}
