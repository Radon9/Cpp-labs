#include <iostream>
using namespace std;

double larger_of(double a, double b)
{
	if(a>b)
	{
		cout<<a;
	}
	else if(b>a)
	{
		cout<<b;
	}
	else
	{
		cout<<b;
	}
}

int main()
{
	double a,b;
	cout<<"Please input two numbers: ";
	cin>>a>>b;
	return larger_of(a,b);
}
