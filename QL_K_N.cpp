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
	for (int i=1;i<=k;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void Try(int i)
{
	for (int j=x[i-1]+1;j<=n; j++)
	{
		x[i]=j;
		if (i==k) xuat();
		else Try(i+1);
	}
}

int main()
{
	cout<<"Nhap N= "; cin>>n;
	cout<<"Nhap K= "; cin>>k;
	x[0]=0;
	Try(1);
	return 0;
}


