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
	for (int i=1;i<=5;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void swap(int &x, int &y)
{
	int tmp=x;
		x=y;
		y=tmp;
}
void Next2()
{
	int j=n-1;
	while (j>0  && x[j]>x[j+1]) j--;
	if (j>0)
	{
		int k=n; 
		while (x[j]>x[k]) k--;
		swap(x[j],x[k]);
		int r=j+1,s=n;
		while (r<s)
		{
			swap(x[r],x[s]);
			r++;s--;
		}
	}
	else ok=false;
}

int main()
{
	cout<<"Nhap N= "; cin>>n;
	for (int i=1;i<=k;i++) x[i]=i;
	while (ok)
	{
		xuat();
		Next2();
	}
	return 0;
}


