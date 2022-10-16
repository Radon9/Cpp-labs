#include <iostream>
using namespace std;

int main()
{
	double a[8],b[8];
	for(int i=0;i<8;i++)
	{
		cin>>a[i];
		b[i]=a[i]+b[i-1];
	}
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<8;i++)
	{
		cout<<b[i]<<" ";
	}
}
