#include <iostream>
using namespace std;

int main()
{
	int max, min;
	cout<<"Please input lower and upper limits for the table: ";
	cin>>min>>max;
	for(int i=min;i<=max;i++)
	{
		cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
	}
}
