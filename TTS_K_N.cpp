#include <iostream>
using namespace std;

int n,x[30],k;
bool ok=true;
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


void Next2()
{
	int j=k;
	while (j>0 && x[j]==n-k+j)
	{
		 j--;
	}
	if (j>0) 
	{
		x[j]=x[j]+1;
		for (int i=j+1;i<=k;i++)
		{
			x[i]=x[j]+i-j;
		}
	}
	else ok=false;
}

int main()
{
	cout<<"Nhap N= "; cin>>n;
	cout<<"Nhap K= "; cin>>k;
	for (int i=1;i<=k;i++) x[i]=i;
	while (ok)
	{
		xuat();
		Next2();
	}
	return 0;
}


