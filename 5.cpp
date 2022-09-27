#include <iostream>
using namespace std;

int main()
{
	int a, sum;
	cout<<"Please print an integer";
	cin>>a;
	for(int i=1;i<=20;i++)
	{
		sum=sum+i;
	}
	cout<<"Your final balance after 20 days is "<< sum+a;
}
