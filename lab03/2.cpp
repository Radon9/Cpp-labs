#include <iostream>
using namespace std;

void func(char a, int b, int c)
{
	cout<<a<<endl;
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}

int main()
{
	char a;
	int b,c;
	cout<<"Please input a character and numbers: ";
	cin>>a>>b>>c;
	func(a,b,c);
}
