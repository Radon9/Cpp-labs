#include <iostream>
using namespace std;

void func(double a, double b, double c)
{
	double d=0;
	if(max(max(a,b),c)>=a && min(min(a,b),c)<=a)
	{
		d=a;
	}
	else if(max(max(a,b),c)>=b && min(min(a,b),c)<=b)
	{
		d=b;
	}
	else if(max(max(a,b),c)>=c && min(min(a,b),c)<=c)
	{
		d=c;
	}
	cout<<min(min(a,b),c)<<" "<<d<<" "<<max(max(a,b),c);
}

int main()
{
	double a,b,c;
	cout<<"Please input three numbers: ";
	cin>>a>>b>>c;
	func(a,b,c);
}

