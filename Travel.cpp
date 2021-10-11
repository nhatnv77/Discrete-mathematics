#include <iostream>

using namespace std;
int  n,can=0,f=1000,cmin=1000;
int a[30],b[30],x[30],c[30][30];
void input()
{
	a[1]=1;
	FILE *fp;
	fp = fopen("dulich.txt","r");
	fscanf(fp,"%d",&n);
	
	for (int i=1;i<=n;i++) b[i]=1; // Full true
	
	for (int i=1; i<=n;i++)
	{
		for (int j=1; j<=n;j++)
		{
		fscanf(fp,"%d",&c[i][j])	;
		if (i!=j && cmin>c[i][j]) cmin= c[i][j];
		}
	}
}
void update()
{
	int sum= can + c[a[n]][a[1]];
	if (sum<f)	
	{
		f=sum;
		for (int i=1;i<=n;i++)
		x[i]=a[i];
	}
}
void xuat()
{
	cout<<"\nChi phi toi uu: "<<f<<endl;
	cout<<"Hanh trinh toi uu: "<<endl;
	for (int i=1;i<=n;i++)
	{
		cout<<x[i]<<" --> ";
	}
	cout<<"1";
}
void Try(int i)
{
	for (int j=2; j<=n; j++)
	{
		if (b[j])
		{
			a[i]=j;
			b[j]=0;
			can=can+c[a[i-1]][a[i]];
			if (i==n) update();
			else if (can + (n-i+1)*cmin <f)
			Try(i+1);
			b[j]=1;
			can = can - c[a[i-1]][a[i]];
		}
	}
}
int main()
{
	input();
	Try(2);
	xuat();
	return 0;
}


