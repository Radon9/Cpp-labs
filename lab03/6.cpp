#include <iostream>
using namespace std;

int main()
{
	int x;
	char a;
	cin>>a;
	x= (int)a;
	if (a>='a' && a<='z')
	{
		cout<<a<<" is letter: "<<x-96;
	}
	else if(a>='A' && a<='Z')
	{
		cout<<a<<" is letter: "<<x-64;
	}
	else
	{
		cout<<a<<" is not a letter: "<<"-1";
	}
}
