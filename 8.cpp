#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"This program computes moduli."<<endl;
	cout<<"Enter an integer to serve as the second operand:";
	cin>>a;
	
	cout<<"Now enter the first operand:";
		
	cin>>b;
		
	cout<<a<<" % "<<b<<" is "<<b%a<<endl;
		
	cout<<"Enter next number for first operand (<= 0 to quit):";
		
	cin>>b;
	cout<<a<<" % "<<b<<" is "<<b%a<<endl;
	while(b>0)
	{
		cout<<"Enter next number for first operand (<= 0 to quit): ";
		cin>>b;
		if(b>0)
		{
		cout<<a<<" % "<<b<<" is "<<b%a<<endl;
		}
		else
		{
			cout<<"Done";
			return 0;
		}
	}
}
