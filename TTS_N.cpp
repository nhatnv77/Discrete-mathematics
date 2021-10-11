#include <iostream>
using namespace std;

int n,x[30];
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
	for (int i=1;i<=n;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void Next1()
{
	int j=n;
	while (j>0 && x[j]!=0)
	{
		 x[j]=0; j--;
	}
	if (j>0) x[j]=1;
	else 
	ok=false;
}
void Next2()
{
	int j=n;
	while (j>0 && x[j]!=0)
	{
		 x[j]=0; j--;
	}
	if (j>0) x[j]=1;
	else 
	ok=false;
}

int main()
{
	cout<<"Nhap N= "; cin>>n;
	for (int i=1;i<=n;i++) x[i]=0;
	while (ok)
	{
		if (check ()) xuat();
		Next1();
	}
	return 0;
}


