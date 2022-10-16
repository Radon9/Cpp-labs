#include <iostream>
using namespace std;

int main()
{
	int i=0;
	double deposit = 1000000;
	do
	{
		deposit = (deposit-100000)+(deposit-100000)*0.08;
		i++;
		cout<<"Chuckie's account: "<<deposit<<" Number of years: "<<i<<endl;
	}
	while(deposit>0);
}
