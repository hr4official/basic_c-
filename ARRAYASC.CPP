#include<iostream.h>
#include<conio.h>
class arasc
{
	public:
		int i,j,n,b[20];
		void get()
		{
			cout<<"\n Enter the No of element:";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				cout<<"\n Enter the array element of "<<i<<":";
				cin>>b[i];
			}
		}
		void asc()
		{
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
			for(i=1;i<=n;i++)
			{
				cout<<" "<<b[i];
			}

		}
};
void main()
{
	clrscr();
		arasc a;
		a.get();
		cout<<"\n Ascending No:";
		a.asc();
		cout<<"\n Descending No:";
		a.dsc();
	getch();
}
