#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"Enter lower and upper integer limits: ";
	cin>>a>>b;
	while(a!=b)
	{
		int c =0;
		for(int i=a;i<=b;i++)
		{
			c=c+i*i;
		}
		cout<<"The sums of the squares from "<<a*a<<" to "<<b*b<<" is "<<c<<endl;
		cout<<"Enter next set of limits: ";
		cin>>a>>b;
	}
	cout<<"Done";
}
