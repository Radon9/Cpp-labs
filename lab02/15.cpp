#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int i=0;
	char a[255];
	cout<<"Please input a line: ";
	while(scanf("%c", &a[i]), a[i]!= '\n')
	{
		i++;
	}
	for(i>=0;i--;)
	{
		cout<<a[i];
	}
}
