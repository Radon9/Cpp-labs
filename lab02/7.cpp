#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	int b;
	char a[99999];
	cout<<"Please input a word: ";
	cin>>a;
	b=strlen(a);
	for(int i=0;i<=b;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<=b;i++)
	{
		cout<<a[b-i]<<" ";
	}
	
}
