#include <iostream>
using namespace std;

int main()
{
	int const onehour = 60;
	int min;
	cout<<"Please print the value";
	cin>>min;
	while(min>0)
	{
		cout<<min/onehour<<" hrs "<<min%onehour<<" minutes "<<endl;
		return 0;
	}
	
}
