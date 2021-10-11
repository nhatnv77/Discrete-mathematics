#include <iostream>

using namespace std;
int n;
int x[30],t[30];
void Try(int i)
{
	for (int j=x[i-1];j<=n-t[i-1];j++)
	{
		x[i]=j;
		t[i]=t[i-1]+j;
		if (t[i]==n) 
		{
			for (int z=1;z<=i;z++)
			{
				cout<<x[z]<<" ";
			}
			cout<<endl;
		}
		else
		Try(i+1);
	}
}
int main()
{
	cout<<"Nhap N= "; cin>>n;
	x[0]=1;t[0]=0;
	Try(1);
	return 0;
}


