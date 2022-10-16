#include <iostream>
using namespace std;

int main()
{
	char a;
	int b;
	cout<<"Please print a letter: ";
	cin>>a;
	b=a;
	for(int i=1;i<=(b-64);i++)
	{	
		for(int z = (b-65);z>=i;z--)
			{
				cout<<" ";
			}
		for(int j=0;j<i;j++)
		{
			cout<<(char)(
			65+j);
		}
		for(int v=i-1;v>0;v--)
		{
				cout<<(char)(64+v);
		}
		cout<<" "<<endl;
	}
} 
