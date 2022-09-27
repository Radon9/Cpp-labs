#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	cout << "Enter a height in centimeters:";
	cin >> a;
	if (a <= 0)
	{
		cout << " bye ";
	}  
	else
	{
		cout<<floor(a/30.48)<<" feet "<< ((a/30.48)-floor(a/30.48))*12<< " inch "<< endl;
 
	}
}
