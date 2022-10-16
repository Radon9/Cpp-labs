#include <iostream>
using namespace std;

int main()
{
	int a[8];
	for(int i = 0; i<=7;i++)
	{
		cin>>a[i];
	}
	for(int i=7;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
}
