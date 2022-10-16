#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int intArray[8] ,j=0;
	for(int i=0;i<8;i++)
	{
		cin>>intArray[i];
	}
	do
	{
		cout<<intArray[j]+pow(2,j)<< " ";
		j++;
	}
	while(j!=8);
}
