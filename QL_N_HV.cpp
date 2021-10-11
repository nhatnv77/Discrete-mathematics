#include <iostream>
using namespace std;

int n,x[30],k=3,b[30];

bool check()
{
	for (int z=1; z<n; z++)
	{
		if (x[z]==0 && x[z+1]==0) return false;
	}
	return true;
}
void xuat()
{
	for (int i=1;i<=n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try(int i)
{
	for (int j=1;j<=n; j++)
	{
		if (b[j])
		{
		x[i]=j;
		b[j]=0;
		if (i==n) xuat();
		else Try(i+1);
		b[j]=1;
		}
	}
}

int main()
{
	cout<<"Nhap N= "; cin>>n;
	for (int i=1;i<=n;i++) b[i]=1;
	Try(1);
	return 0;
}


