#include <iostream>
using namespace std;

int n,x[30];

int check()
{
	for (int z=1; z<n; z++)
	{
		if (x[z]==0 && x[z+1]==0) return 0;
	}
	return 1;
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
	for (int j=0;j<=1; j++)
	{
		x[i]=j;
		if (i==n)
		{
			if (check()) xuat();
		} 
		else Try(i+1);
	}
}

int main()
{
	cout<<"Nhap N= "; cin>>n;
	Try(1);
	return 0;
}


