#include <iostream>
using namespace std;

double min(double a,double b)
{
	if(a>b)
	{
		cout<<b;
	}
	else if(b>a)
	{
		cout<<a;
	}
	else
	{
		cout<<a;
	}
	
}

int main()
{
	double a,b;
	cin>>a>>b;
	return min(a,b);
}
