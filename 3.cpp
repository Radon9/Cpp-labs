#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Please enter the number of days";
	cin>>a;
	while(a>0)
	{
		if ( a/7 == 1) 
		{
		cout<< a/7<< "Week " << a%7 << "Days"<< endl;
		return 0;
		}
		else
		{
			cout<< a/7<< "  Weeks " << a%7 << " Days "<< endl;
			return 0;
		}
	}
	
}
