#include <iostream>
using namespace std;

void Fibonacci(int a)
{
	int sum=0, n1 = -1, n2 = 1;
	for(int i=0;i<=a;i++)
	{
		sum=n1+n2;
		cout<<sum<<" ";
		n1=sum-n1;
		n2=sum;
	}
}

int main()
{
	int a;
	cin>>a;
	Fibonacci(a);
}

