#include <iostream>
using namespace std;
 
int main()
{
	int n=1, f=5;
	while (f<150)
	{
		cout<<n<<"st"<<" Week: "<< f<<"\n";
		f=(f-n)*2;
		n++;
	}
	
}
