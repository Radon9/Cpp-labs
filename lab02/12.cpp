#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the number of terms: ";
	cin>>a;
	while(a!='e')
	{
	double b=0,c=0;
	for(double i=1;i<=a;i++)
	{
		b=b+(1/i);
	}
	for(double i=1;i<=a;i++)
	{
		c=(pow(-1,i-1)/i)+c;
	}
	cout<<"The first line: "<<b<<endl<<"The second line: "<<c<<endl;
	cout<<"Enter the number of terms(e to exit): "<<endl;
	cin>>a;
}
}
