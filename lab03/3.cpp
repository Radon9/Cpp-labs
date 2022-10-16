#include <iostream>
using namespace std;

void mean(double a, double b)
{
	cout<<(2/((1/a)+(1/b)));
}

int main()
{
	double a,b;
	cout<<"Please input two numbers: ";
	cin>>a>>b;
	mean(a,b);
}
