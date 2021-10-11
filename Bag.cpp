#include <iostream>

using namespace std;

float n,b,f=-1000,cost=0,w=0,t;
int x[30],fo[30],c[30],a[30];
void input()
{
	cout<<"Nhap so luong do vat: ";cin>>n;
	cout<<"Nhap trong luong toi da: "; cin>>b;
	for (int i=1;i<=n;i++)
	{
		cout<<"Nhap gia tri sd vat "<<i<<" :"; cin>>c[i];
		cout<<"Nhap trong luong vat "<<i<<" :"; cin>>a[i];
	}
	
}
void xuat()
{
	cout<<"Cost: "<<f<<endl;
	for(int i=1;i<=n; i++)
	cout<<fo[i]<<" ";
}
void update()
{
	if (cost>f)
	{
		f=cost;
		for (int z=1;z<=n; z++)
		{
			fo[z]=x[z];
		}
	}
}
void Try(int i)
{
	t= (b-w)/a[i];
   	for (int j=t;j>=0;j--)
	{
		x[i]=j;
		w = w + a[i]*x[i];
		cost = cost + c[i]*x[i];
		
		if (i==n) update();
		else if (cost + ((b-w)*c[i+1]/a[i+1]) >f)
		Try(i+1);
		w = w - a[i]*x[i];
		cost = cost - c[i]*x[i];
	}
}
int main()
{
	input();
	Try(1);
	xuat();
	return 0;
}


