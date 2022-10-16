#include <iostream>
using namespace std;

int main()
{
	double sum1=100, sum2=100,i=0;
	do
	{
		sum1=sum1+(100*0.1);
		sum2=sum2*0.05+sum2;
		i++;
		cout<<"Number of years: "<<i<<" The value of Daphne’s investment: "<<sum1<<" The value of Deirdre’s investment: "<<sum2<<endl;
	}
	while(sum2<sum1);
}
